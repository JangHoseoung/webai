#include <stdio.h>

int sfunc(int num){
    num = 30;
    printf("num = %d\n",num);
    return num; //main함수로 return
}


int main(){
    int age = 20;
    age = sfunc(age);
    printf("age = %d",age);
    return  0;

}