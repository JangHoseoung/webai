#include <stdio.h>

int sfnc(int *param,int len){
    // printf("param[0] %d\n",param[0]);
    // printf("param[1] %d\n",param[1]);
    // printf("param[2] %d\n",param[2]);

    for(int i=0; i<len;i++)
        printf("param[%d] %d\n",i,param[i]);
        //printf("sizeof(param) %d\n",param); //64비트컴이랑 8로 값이 나옴..
}
int addary(int *param,int len,int add){
    for(int i = 0; i<len; i++)
        param[i] += add;
}

int main(){
    int arr1[3] = {11,22,33};

    sfnc(arr1,sizeof(arr1)/sizeof(int));
    addary(arr1,sizeof(arr1)/sizeof(int),5); //5만큼 증가
    printf("\n");
    sfnc(arr1,sizeof(arr1)/sizeof(int));

    // printf("arr1 = %d\n",arr1); //&arr1[0] = arr1

    // printf("sizeof(arr1)/sizeof(int) %d\n",sizeof(arr1)/sizeof(int));

    return 0;
}