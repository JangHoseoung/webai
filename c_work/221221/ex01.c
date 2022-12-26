/*
    page 268
    2. char형 배열에 저장한뒤 문자열을 역순으로
    3. LOVE라는 단어를 입력받아 아스키 보드값중 가장 큰 값인 V를 출력

    page 284


    포인터
    문제1 아래 예제 실행시 변수와 포인터 관계 설명
    int main()
    {
        int num = 10;
        int *ptr1 = &num
        int *ptr2 = ptr1;
    }

    (*ptr1)++;
    (*ptr2)++;
    printf("%d \n",num); 11 12
    */

   #include <stdio.h>

   int main(){
    
    char str[] = "LOVE";
    int max = str[0];
    
    printf("str = %s\n",str);
    for(int i = 0;i<5;i++){
        printf("str[%d] = %d\n",i,str[i]);
        if(max<str[i]){
            max = str[i];
        }
    }
    printf("max = %c",max);

    return 0;
   }
   //print(ord(i)) 파이썬에서 아스키코드 출력..