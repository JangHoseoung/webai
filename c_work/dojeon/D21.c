#include <stdio.h>

void even(int* arr){
    printf("짝수는 ");
    for(int i=0;i<10;i++){
        if(arr[i]%2==0){
            printf("%d:",arr[i]);
        }}}
void odd(int* arr){
    printf("홀수는 ");
    for(int i = 0;i<10;i++){
        if(arr[i]%2!=0){
            printf("%d:",arr[i]);
        }
    }
}
int main (){
    int arr[10];
    int n = 0;
    for(int i = 0;i<10;i++){
        printf("숫자를 입력하세요");
        scanf("%d",&n);
        arr[i] = n;
    }
    even(arr);
    printf(" ");
    odd(arr);
}