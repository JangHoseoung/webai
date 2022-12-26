#include <stdio.h>

int main(){
    int num1,num2;
    char num3;
    printf("숫자 입력하세요 :");
    scanf("%d",&num1,&num2);
    rewind(stdin);
    printf("연산자를 입력하세요: ");
    scanf("%c",&num3);
    if(num3 == '+')
    {   int a = num1+num2;
        printf("덧셈 결과는 : %d",a);}
    if(num3 == '-')
    {  int b = num1-num2;
        printf("뺄셈 결과는 : %d",b);
    }
    if(num3 == '*')
    {   int c = num1*num2;
        printf("곱셈 결과는 : %d",c);
            }
    if(num3 == '/')
    {   int d = num1/num2;
        printf("나눗셈의 결과는 : %d",d);
    }
    if(num3 == '%')
    {   int e = num1%num2;
        printf("나머지는 : %d",e);
    }

}