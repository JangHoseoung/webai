#include <stdio.h>

int main(){
    int num1; 
    int i = 0;

    printf("정수를 입력 하시오 : ");
    scanf("%d",&num1);

    while(i<num1){
        printf("Hello world!\n");
        i=i+1;
    }
    return 0;
}