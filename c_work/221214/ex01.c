/*
    page 161
    문제 2
    0이상 100이하의 정수중에서 짝수의 합을 출력하는 프로그램을 구현하되,
    do-while 문 기반으로 구현해보자
    참고로 덧셈 결과는 2550이 되어야 한다

    page 167
    for문을 활용
    문제1
    프로그램 사용자로부터 두개의 정수를 입력 받아서
    두 정수를 포함하여 그 사이에 존재하는 정수들의 합을 계산하여 출력하는
    프로그램을 작성해보자 예를 들어서 3,5과 입력되면 3+4+5가
    출력 되어야 한다

    문제2
    다음 수식인 계승을 계산하는 프로그램을 작성하자
    n1 = 1*2*3*....*n
    ex)5 = 5*4*3...
    프로그램사용자로부터 n에 해당하는 정수를 입력받는다
    n!계산하여 출력하자

    page 189 [if~else문 활용]
    문제1
    1이상 100미만의 정수 중에서 7의 배수와 9의 배수를 출력하는
    프로그램을 작성하자 단 ! 7의 배수의면서 동시에 9의 배수인 정수는 한번만 출력되어야한다.

    문제2
    두 개의 정수를 입력 받아서 두수의 차를 출력하는 프로그램을 구현해보자.
*/

#include <stdio.h> //1번 풀이

void ex01(){  //0~100 짝수 합
    int start = 0;
    int total = 0;

    do{
        start = start+2;
        total = start+total;
    }
    while(start!=100);
    printf("total = %d\n\n",total);
}

void ex02(){  //입력받은 두수의 합
    int start = 0, end = 0;
    int total = 0;
    printf("시작 정수 입력 : \n");
    scanf("%d",&start);
    printf("끝 정수의 입력: \n");
    scanf("%d",&end);

    printf("start = %d end = %d\n",start,end);
    for(int i = start;i<end+1; i++){
        total = total + i;
    }
    printf("total = %d\n\n",total);
}

void ex03(){
    int input;
    int total = 1; //0곱하면 0
    printf("구하고 싶은 팩토리얼 정수 입력 : ");
    scanf("%d",&input);

    for(; input>0 ; input--){
        total = total*input;
    }
    printf("total = %d",total);
}
int main(){
    ex01();
    ex02();
    ex03();
}