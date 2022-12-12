/*
        p155
        문제4 프로그램사용자로부터 입력받은 숫자에
        해당하는 구구단을 출력하되, 역순으로 출력하는
        프로그램을 작성해보자
        2
        2*9
        2*8...
    
*/
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