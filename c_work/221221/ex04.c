#include <stdio.h>

void main(){

    int arr[][4] = {
        {1,2,3,4},
        {4,5},
        {6,7,8},
    }; //세로 안적어도 알아서 컴파일러해줌
    /*
    1234
    4500
    6780 으로 출력
    */
    printf("size of(arr) %d\n",sizeof(arr));
    printf("size of(arr[0]) %d\n",sizeof(arr[0]));
    printf("size of(arr[1]) %d\n",sizeof(arr[1]));
    printf("size of(arr[2]) %d\n",sizeof(arr[2]));

    for(int x = 0;x<sizeof(arr)/sizeof(arr[0]);x++){
        for(int y =0;y<4;y++){
            printf("arr[%d][%d] = %d ",x,y,arr[x][y]);
        }
        printf("\n");
        //sizeof(arr)/sizeof(arr[0]) 전체에서 한줄 나누면 줄 갯수나옴..48/16
    }
}