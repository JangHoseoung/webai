#include <stdio.h>
#include <stdlib.h>

int main(){
    int num = 20;
    void *ptr = &num;

    // *ptr = 30;
    // print("num = %d\n",num);
    // print("*ptr = %d\n",*ptr);

    int *ptr1 = NULL;
    ptr1 = (int*)malloc(12);
    *ptr1 = 100;
    printf("num = %d\n",num);
    printf("*ptr1 = %d",*ptr1);
    free(ptr1);
}