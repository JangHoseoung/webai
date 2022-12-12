#include <stdio.h>

int main(){

    for(int i=0; i<10; i++){
        if(i==0){
            continue;  //다시 for 조건으로 올라가서 0출력x  shift + \ = |
        }
        
        printf("i = %d\n",i);
        if(i==7){
            printf("종료됩니다");
            break;
        }
        if(i%3==0){
            printf("%d = 는 3의 배수입니다\n",i);
        }
    }
}