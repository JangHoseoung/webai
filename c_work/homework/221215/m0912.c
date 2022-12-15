#include <stdio.h>

double CelToFah(double c){
    return 1.8*c+32;    
}
double FahToCel(double f){
    return (f-32)/1.8;
}
int main(){
    int sel;
    double num;
    printf("섭씨(1)와 화씨(2) 선택 : ");
    scanf("%d",&sel);
    if(sel==1){
        printf("섭씨를 입력하시오 : ");
        scanf("%lf",&num);
        printf("화씨는 %f 입니다\n",CelToFah(num));}
    else if(sel==2){
        printf("화씨를 입력하시오 : ");
        scanf("%lf",&num);
        printf("섭씨는 %f입니다\n",FahToCel(num));}
    else
        printf("입력 오류\n");
}    

