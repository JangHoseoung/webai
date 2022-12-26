#include <stdio.h>

int sum(int n1,int n2){
    printf("덧셈을 수행합니다\n");
    return n1+n2;
}
int sub(int n1,int n2){
    printf("뺄셈을 수행합니다\n");
    return n1 - n2;
}
int mul(int n1,int n2){
    printf("곱셈을 수행합니다\n");
    return n1*n2;
}
int div(int n1,int n2){
    printf("나눗셈을 수행합니다\n");
    return n1/n2;
}
int divN(int n1,int n2){
    printf("나머지 구하기를 수행합니다\n");
    return n1%n2;
}


int main(){
    //사친연산 함수 구현(5가지)

    //1. 2개의 정수입력받기
    printf("두개의 정수를 입력하세요: ");
    int num1,num2;
    scanf("%d %d", &num1,&num2);
    rewind(stdin); //버퍼(임시저장공간에 저장)를 비워주는 문구

    //2. 연산자 입력받기
    printf("연산자를 입력하세요: ");
    char ch;
    scanf("%c",&ch);

    //3. 사칙연산 함수 사용
    int result;
    switch(ch){
        case '+': 
            result = sum(num1,num2);
            break; //브레이크 안하면 밑에 연산까지 계산함...
        
        case '-':
            result = sub(num1,num2);
            break;
        case '*':
            result = mul(num1,num2);
            break;
        case '/':
            result = div(num1,num2);
            break;
        case '%':
            result = divN(num1,num2);
            break;
    }
    printf("결과값은 %d 입니다.\n",result); 
}