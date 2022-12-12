#include <stdio.h>

/*
    조건에 따른 흐른 분기
    샤용자가 1을 입력하면 1을 입력했네요 출력
    아니면 1을 입력하지 않았네요 출력
*/

int main(){
    int num;
    printf("입력하세요 : ");
    scanf("%d",&num);

    while(1){ //무한루프 지우고 사용
        if( num == 1){ //1과 같은지?
            printf("1을 입력하셨네요...");
            break;
    }
        else{
            printf("1을 입력하지 않았네요....");
            continue;
        }
    }
}