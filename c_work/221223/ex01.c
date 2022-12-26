#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 함수 :: 특정 기능을 수행하는 명령어들의 집합
//함수 기본형
//반환형 함수명(매개변수타입 매개변수명,...){명령문들}
int sum(int n1, int n2){
    printf("덧셈을 수행합니다\n");
    return n1+n2;
}


int main(){
    //2개의 정수를 입력받고, 합을 출력
    
    //출력 첫번째 방법
    int a, b;
    scanf("%d %d",&a,&b);
    printf("덧셈 결과는 :%d\n",sum(a,b));
    
    //출력 두번째 방법(변수 생성)
    int s = sum(a,b);
    printf("덧셈 결과는 :%d\n",s);

}