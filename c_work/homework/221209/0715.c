#include <stdio.h>

int main(){
    printf("몇개의 정수를 입력? ");
    int num;
    scanf("%d",&num);
    
    int cnt = num;
    int total = 0;
    int input = 0;

    while(num>0){
        printf("정수 입력 : ");
        scanf("%d",&input);
        total = total + input;
        num--; //num = num-1
    }
    printf("총 합 : %d \n",total);
    printf("총 합의 평균 %.2f \n",total/(double)cnt);
}