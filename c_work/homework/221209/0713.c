#include <stdio.h>

int main(){
    int total = 0;
    int num = 1;
    printf("정수를 입력 하시오 : ");
    scanf("%d", num);
    while(num!=0){
        printf("정수입력(0은 끝) : ");
        
        total+=num; 
    }
    printf("입력된 정수의 총합 = %d\n", total);
return 0;
}