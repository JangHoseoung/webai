#include <stdio.h>

void whoareyou(char *test){
    printf("===============who are you start================\n");
    printf("%d\n",test);
    printf("%s\n",test);
    printf("===============who are you  end================\n");
    
}

void main(){

    char str1[] = "My String";
    char *str2 = "My String";

    printf("str1 = %s\n",str1);
    printf("str2 = %s\n",str2);

    str1[0] = 'x';
    //str2[0] = 'x'; //운영체제가 못바꿔서 다음 줄 문제생김..
    //%s 라는 서식문자는 str1 0 번째 배열에서 \0 문자까지 출력
    //%s 라는 서식문자는 0번째 주소 \0번째 주소까지 출력
    printf("str1 = %s\n",str1);
    printf("str2 = %s\n",str2);

    printf("&str1[0] %d\n",&str1[0]); //=str1
    printf("str2 %d\n",str2); //주소값
    whoareyou(str1);
}