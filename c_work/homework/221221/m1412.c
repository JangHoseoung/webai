#include <stdio.h>

void swap3(int *ptr1, int *ptr2, int *ptr3){
    int temp = *ptr3;
    *ptr3 = *ptr1;
    *ptr1 = temp;
}
int main(){
    int num1,num2,num3;
    printf("num1 : ");
    scanf("%d",&num1); 
    printf("num2 : ");
    scanf("%d",&num2); 
    printf("num3 : ");
    scanf("%d",&num3);  
    swap3(&num1,&num2,&num3);
    printf("정답은 %d %d %d",num1,num2,num3);
}