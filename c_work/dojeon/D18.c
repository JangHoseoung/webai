#include <stdio.h>

int j(int num){
    if(num==0)
        return 1;
    else
        return 2 * j(num-1);
    }
int main(){
    int num;
    printf("정수 입력 :");
    scanf("%d",&num);
    printf("2의 %d승은 : %d",num,j(num));
}