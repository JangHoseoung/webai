#include <stdio.h>

int main(){
    int n = 65;
    printf("숫자로는 %d\n",n);
    printf("문자로는 %c\n",n); //아스키 코드 A로 출력됨..

    char ch = 'a';
    printf("숫자로는 %d\n",ch);
    printf("문자로는 %c\n",ch); //소문자의 아스키코드 97...

    ch = '0';
    printf("숫자로는 %d\n",ch);
    printf("문자로는 %c\n",ch); //문자 '0'의 아스키 코드는 48...

    char c;
    printf("문자를 입력해라 : ");
    scanf("%c",&c);
    printf("아스키 코드 값은 %d\n",c);
}