/*
page 260
*/

#include <stdio.h>

void main(){
    int max = 0;
    int min = 0;
    int total = 0;

    int arr[5]; //길이 1,2,3,4,5
    max = min = total = arr[0];
    for(int i=0;i<5;i++){
        printf("정수 입력");
        scanf("%d",&arr[i]);
        total += arr[i];
    }
    //max 구하는 비교 시작
    for(int i=0; i<5,i++;){
        if(max<arr[i])
            max = arr[i];
    }
    min = arr[0];
    printf("\n");
    for(int i=0; i<5; i++){
        printf("arr[%d] = %d\n",i,arr[i]);
    }
    printf("\n");
    
    printf("total = %d\n",total);
    printf("max = %d\n",max);
    printf("min = %d\n",min);
    

}

