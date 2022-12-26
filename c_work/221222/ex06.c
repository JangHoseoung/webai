#include <stdio.h>

int main(){
    //1.크기가 31인 배열 선언(반드시 전부 0으로 초기화)
    int cnt[31] = { 0 };
    //2.입력 받기
    for(int i=0;i<28;i++){
        int num;
        scanf("%d",&num); //제출한사람 번호입력
        cnt[num]++;} //배열값 +1
    for(int i =1;i<=30;i++){
        if(cnt[i]==0){
            printf("범인 : %d ",i);
        }
    }
}
