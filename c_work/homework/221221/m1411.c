#include <stdio.h>

int jagob(int num){
   return num*num; 
}
void juso(int *ptr){
    int num = *ptr;
    *ptr = num*num;
}

void main(){
    int num;
    printf("제곱을 구해보자 : ");
    scanf("%d",&num);
    jagob(num);
    printf("제곱은 %d\n",jagob(num));
    juso(&num);
    printf("제곱은 %d",num);
}