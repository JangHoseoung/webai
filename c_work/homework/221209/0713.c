#include <stdio.h>

int main(){
    int num1 = 0, i=1;
    printf("정수를 입력 하시오 : ");
    scanf("%d", num1);
    while(0<i<num1){
        printf("%d+%d=%d\n",num1,i,num1+i);
        i++;}
return 0;
}