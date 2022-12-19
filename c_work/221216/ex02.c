/*
    3.5 입력 345단 출력 ex
    만들어라

*/


#include <stdio.h>
    
    int main(){
    int start=0,end = 0;
    printf("두수를 입력하세요(띄워쓰기나 엔터키 가능)");
    scanf("%d %d",&start,&end);

    printf("start = %d\n",start);
    printf("end = %d\n",end);

    //end가 start 보다 작을때
    if (end < start){
    //temp라는 변수를 만들어서 start에 값을 넣어놓자
        int temp = start;
        start = end;
    //temp 안에 있는 20을 end에 넣자
        end = temp;
    }
    
    /*start * 1 =
      start * 2 =
      start<end+1
    */
    for(;start<end+1;start++){
        for(int i =1;i<10;i++){
            printf("%d*%d=%d\n",start,i,start*i);
        }
        printf("\n");
    }

}


