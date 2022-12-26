#include <stdio.h>

/*
    문제1
    int arr [] = 1,2,3,4,5
    ptr 2씩 증가
*/

void main(){

    int arr[] = {1,2,3,4,5};
    int *ptr = arr;

        for(int i = 0; i<sizeof(arr)/sizeof(int); i++)
        {printf("arr[%d]=%d\n",i,arr[i]);}

    printf("\n");      
        
        for(int i = 0; i<sizeof(arr)/sizeof(int); i++)
        {ptr[i] = ptr[i]+2;
        }
        
        for(int i = 0; i<sizeof(arr)/sizeof(int); i++)
        {printf("arr[%d]=%d\n",i,arr[i]);}
    
    printf("\n");
        
        for(int i = 0; i<sizeof(arr)/sizeof(int); i++)
        {*(ptr+i) = *(ptr+i)+2;
    
    printf("\n");
    
    for(int i = 4; i>-1; i--)
        {ptr[i] = ptr[i]-1;}
    
    printf("\n");

    for(int i = 0; i<sizeof(arr)/sizeof(int); i++)
        {printf("arr[%d]=%d\n",i,arr[i]);} //ptr[i] = arr[i] 동일 값이 나온다..


}
}