#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//2중 반복문, 배열, 포인터
int main(){
    //2중 반복문 ㅡ> "별 찍기"
    //백준 2442번
    //1. 입력값 받기
    
    int n;
    printf("몇개 : ");
    scanf("%d",&n);

    //2. 이중 반복문 설계
    for(int i = 1;i<=n;i++){
        for(int j =1 ;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }

//배열 ㅡ>1차워 배열,다차원 배열(보통은 2차원)
//1차원 배열 :: 점수(int형)들을 입력받고 최대값, 최소값 추려내기
//1.배열 선언 (5개)
//값 안 넣으면 쓰레기값
int score[5];
//입력받기
printf("점수를 입력해주세요.\n");
for(int i=0;i<5;i++){
    scanf("%d",&score[i]);//0에서 4까지 입력
}

//3 최대값 최소값 추려내기
int max = 0, min = 100;
for(int i = 0;i<5;i++){
    if(max<score[i]){max = score[i];}
    if(min>score[i]){min = score[i];}
}
//4.정답 출력하기
printf("최대는 %d 최소는 %d\n",max,min);
}