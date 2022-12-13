#include <stdio.h>

int main(){
    int total = 0,num = 0;
    printf("정수를 입력하시오(0은 quit) : ");
    scanf("%d",&num);
    total = num + total;
    while(num!=0){
        printf("정수를 입력하시오(0은 quit) :");
        scanf("%d",&num);
        total = total + num;
    }
    printf("합계 = %d",total);
    return 0;
}