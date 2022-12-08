#include <stdio.h>

int main(){
    int a = 10;
    a++;// a = a+1
    printf("a = %d\n",a);
    a--; // a = a-1
    printf("a = %d\n\n",a);
    printf("a = %d\n",a++); //11출력
    printf("a = %d\n",a--); //11에서 -1
    printf("a = %d\n\n",a); //10
    printf("a = %d\n",--a); //10-1
    printf("a = %d\n",++a); //9+1
    printf("a = %d\n",a);   //10

    return 0;
}