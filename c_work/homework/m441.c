#include <stdio.h>

int main(){
    int num;
    printf("숫자를 입력하시오 : \n");
    scanf("%d", &num);
    num = ~num;
    num = num+1;
    printf("결과값 : %d", num);
    return 0;
}