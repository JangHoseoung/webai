#include <stdio.h>

int main()
{

    int dan=0,num = 1;
    printf("몇단 입력? : ");
    scanf("%d", &dan);

    while (1)  //0아닌 정수는 true 무한루프 0은 종료
    {
        printf("%d * %d = %d\n",dan, num, dan * num);
        num++;

        break; //stop
    }
}