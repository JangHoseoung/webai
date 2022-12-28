#include <stdio.h>

int main(){

    int ch1,ch2;

    ch1 = getchar();
    ch2 = fgetc(stdin);

    putchar(ch1);
    fputc(ch2,stdout);
    // putchar(ch2);
    printf("ch2 = %d",ch2);//줄바꿈이 아스키코드로 10

    printf("ch2 = %c",ch2); //줄바꿈
    return 0;
}