#include <stdio.h>

int main(){
    int arr[] = {1,2,3,4,5}; //4바이트 저장 5X4

    printf("sizeof = %d\n",sizeof(arr));
    int len = sizeof(arr)/sizeof(int); //int형은 4바이트
    printf("len = %d\n",len);
    for(int i = 0; i<len;i++)
        printf("arr[%d] = %d\n",i,arr[i]);
}