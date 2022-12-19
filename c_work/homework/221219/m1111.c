#include <stdio.h>

int main(){
    int arr[5];
    int i;
    int max,min,sum;
    print("5개의 정수를 입력하시오 : ");
    for(i=0;i<5;i++){
        scanf("%d",arr[i]);
        for(i=0;i<5;i++){
            sum = arr[i]+sum;
            if(arr[i]>max){
                arr[i]=max;
            if(arr[i]>min)
                arr[i] = min;
            }
    printf("최대값 : %d",arr[i])
        }
    }
}