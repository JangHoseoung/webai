#include <stdio.h>

int main(){

    char str[] = "good morning!";
    printf("sizeof(str) = %d\n",sizeof(str));

    str[12] = '?';
    //%s = \0 널문자가 있는데까지 문자열은 출력한다
    printf("str = %s\n",str);  //문자열은 %s
    printf("str[13] = %c\n",str[13]);
    printf("str[13] = %d",str[13]);
}