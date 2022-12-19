/*
    call by reference
    call by value
*/

#include <stdio.h>
//call by value
void whovalue(int value){
    value = 20;
    printf("value = %d\n",value);
}
//call by reference
void whoref(int *reference){
    *reference = 20; //a의 주소값이 10에서 20으로 변화
    printf("reference = %d\n",*reference);
}
void main(){
    int a = 10;
    printf("a = %d\n",a);
    whovalue(a);
    printf("a = %d\n",a);
    whoref(&a); //a주소값
    printf("a = %d\n",a);
}
