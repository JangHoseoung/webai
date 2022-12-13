#include <stdio.h>

int main(){
    int num = 0, result = 0;

    while(num<=100)
    {result = num + result;
    num = num +2;
    }

    printf("result = %d\n",result);
}