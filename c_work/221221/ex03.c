/*
    num1 num2 10,20 초기화
    int형 변수 ptr1 ptr2 num1,2를 가리키게하자
    ptr1 ptr2를 이용하여 num1+10 num2-10..
    ptr1과 ptr2의 대상을 바꾸자
*/



#include <stdio.h>


int main(){
    int num1=10,num2 = 20;

    int *ptr1= &num1;
    int *ptr2;
    ptr2 = &num2;

    *ptr1+=10;
    *ptr2-=10;
    
    printf("ptr1 = %d \nptr2 = %d\n\n",ptr1,ptr2);
    
    printf("ptr1 = %d \nptr2 = %d\n\n",*ptr1,*ptr2);
    
    ptr1 = &num2;
    ptr2 = &num1;
    printf("*ptr1 = %d \n*ptr2 = %d\n",*ptr1,*ptr2);
}