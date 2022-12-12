#include <stdio.h>

int main(){

    int num;
    int i = 9;

    printf("숫자 입력 : \n");
    scanf("%d",&num);

    // for(; i>0 ; i = i-1){
    //cltr + / 주석 설정
    while( i>0){
    printf("%d * %d= %d\n",num,i,num*i);
    i = i-1;
    }
    
}