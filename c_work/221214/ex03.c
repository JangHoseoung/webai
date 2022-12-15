#include <stdio.h>

void ex01(){
    int a = 1;
    while(a<100){
        //7로 나누었을때 나머지 0
        if(a%7 == 0){
            printf("%d\t",a);
            a++;
            continue;
        }
        if(a%9 == 0){
            printf("%d\t",a);
        }
        a++;
    }
}
void ex02(){
    int num1,num2;

    printf("\n첫번째 수 입력 : \n");
    scanf("%d",&num1);
    printf("두번째 수 입력 : \n");
    scanf("%d",&num2);

    int result = num1>num2? num1-num2:num2-num1;
    printf("result = %d",result);
}
void main(){
    ex01();
    ex02();

 
}