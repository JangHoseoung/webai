#include <stdio.h>

int main(){
    int sum = 0, num=0, i=0;

    while (i<5)
    {
        while(num<=0){
        printf("0보다 큰 수를 입력(%d번째) : \n",i+1);
        scanf("%d",&num);}
    sum=num+sum;
    num=0;
    i++;
    }
    printf("총 합 : %d",sum);
    return 0;
}