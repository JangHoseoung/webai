#include <stdio.h>

int choi(int n){
    int result = 1;
    for(int i=1;i<n;i++){
        result = result*2;
    if(result > n)
        return i-1;
    }
}
int main(){
    int n;
    printf("정수를 입력하시오 : ");
    scanf("%d",&n);
    printf("최대값은 : %d",choi(n));
}