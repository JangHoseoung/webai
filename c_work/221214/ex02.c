#include <stdio.h>

int factorial(int n){

    if(n==0)
        return 1; //1로 리턴
    else
        return n * factorial(n-1); //4*factorial(3)
}

int main(){
    printf("4! = %d",factorial(4));
}