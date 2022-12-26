#include <stdio.h>

int main(){
    // 아스키코드, 배열
    // 이름 입력받고, 이름에 있는 철자를 순서대로 출력
    
    //1.이름 입력받기
    char name[20];
    printf("이름을 입력하시오");
    scanf("%s",&name);
    //2.배열 생성
    //배열값 -> 0 "이 철자가 나타나지 않음"
    //배열값 >=1 "이 철자가 나타났음"
    int count[26]={0};
    //ex)count[0]의 배열값이 0이라면 ㅡ>'A'가 나타나지 않음
    //ex)count[2]의 배열값이 2이라면 ㅡ>'C'가 나타났음

    //3.name 탐색 janghoseoung/n 주소값
    for(int i = 0;i<sizeof(name)/sizeof(char);i++){

        //소문자만 입력받는다고 가정
        count[name[i]-'a']++;
        //입력값이 janghoseoung 가정할때
        //name[0] = j,count['j'-'a']++즉 10-1 = count[9]++
        //name[1] = e, count['e'-'a']++ ->count[4]++

    }
    printf("나타나는 알파벳은 아래와 같다\n");
    for(int i = 0;i<26;i++){
        if(count[i]>0){
            //ex)count[0]의 배열값이 0이라면 ㅡ>'A'가 나타나지 않음
            //ex)count[2]의 배열값이 2이라면 ㅡ>'C'가 나타났음
            printf("%c",i+'a');
            
        }
    }
    printf("\n");
    }