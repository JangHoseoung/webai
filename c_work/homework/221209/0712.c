#include <stdio.h>

int main(){
    int num1=0, i=0;
    printf("양의 정수를 입력하시오 : ");
    scanf("%d", &num1);

    while(i<num1){  //num = 4 i= 0, 1, 2, 3번 (4번)
        i++;
        printf("%d\n",3*i);
    }
    return 0;
}