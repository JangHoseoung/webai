#include <stdio.h>

int main(){
    int num1, i=0;
    printf("양의 정수를 입력하시오 : ");
    scanf("%d", &num1);
    while(i<num1){  //num = 4 i= 0, 1, 2, 3번 (4번)
        printf("%d\n",3*num1);
        i++;
    }
    return 0;
}