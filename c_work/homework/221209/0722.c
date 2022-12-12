#include <stdio.h>

int main(){
    int num1=0, num2=0;
    while (num1<5)
    {
        while (num2<num1){
            printf(" o");
            num2=num2+1;
        }
    num2 = 0;
    printf("* \n");
    num1++; 
    }    
}