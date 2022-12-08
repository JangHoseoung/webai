/*
    03-1 5번문제


*/

#include <stdio.h>

int main(){
    int num1,num2,num3;
    printf("3개의 숫자 입력 :");
    scanf("%d %d %d",&num1,&num2,&num3);

    printf("num1 = %d num2 = %d num3 = %d\n",num1,num2,num3);
    printf("(%d-%d)*(%d+%d)*(%d%%%d) = %d"
        ,num1,num2,num2,num3,num3,num1,
        (num1-num2)*(num2+num3)*(num3%num1));
return 0;
}
