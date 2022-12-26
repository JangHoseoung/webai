#include <stdio.h>
int main(){
    //포인터 변수 :: 가리(?)키는 변수?

    int num = 5;
    //int*ptr=&num;
    int* ptr; //int형 포인터 변수 ptr선언
    ptr = &num;//ptr  변수에 num 주소값 투입

    //num의 주소값이 1000이라 가정할 때
    //num값은 5,&num값은 1000

    printf("num의 값은 %d\n",num);
    printf("num 주소출력 : %d\n",&num);

    int arr[10] = {0};
    printf("arr의 주소값 %d\n",arr); //arr 0의 주소값 나옴..
    printf("arr+1의 주소값 %d\n",arr+1);
}