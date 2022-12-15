#include <stdio.h>

int main(){
    int second;
    int h,m,s;
    printf("초를 입력하세요 :");
    scanf("%d",&second);

    h = second/3600;
    m = (second%3600)/60;
    s = (second%3600)%60;

    printf("h:%d, m:%d, s:%d",h,m,s);
}