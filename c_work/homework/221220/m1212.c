#include <stdio.h>

int main(){
    int num1 = 10,num2 = 20;
    int *ptr1 = &num1;
    int *ptr2 = &num2;
    int *swap;
    (*ptr1) += 10 ;
    (*ptr2) -= 10 ;

    swap = ptr1;
    ptr1 = ptr2;
    ptr2 = swap;

    printf("값은 %d %d\n", *ptr1, *ptr2);
    return 0;
}