#include <stdio.h>

int main(){
    int arr[3] = {11,22,33};

    int *ptr; //int *ptr=&arr[0] *ptr = 44; 어떤 값을 넣을 때 한줄로 입력..
    ptr = &arr[0];

    printf("주소값 ptr %d\n",ptr);
    printf("주소값 ptr+1 %d\n",ptr+1);
    printf("주소값 ptr+2 %d\n",ptr+2);

    printf("값 *ptr %d\n",*ptr);
    printf("값 *(ptr+1) %d\n",*(ptr+1));
    printf("값 *(ptr+2) %d\n",*(ptr+2));

    printf("값 ptr %d\n",ptr[0]);
    printf("값 ptr[1] %d\n",ptr[1]);
    printf("값 ptr[2] %d",ptr[2]);
//ptr arr로 바꿔도 동일 값 출력
}