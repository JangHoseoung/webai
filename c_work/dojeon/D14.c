#include <stdio.h>

int main(){
int money;
int num1 = 500; //num1 크림빵 num2 새우깡 num3콜라  
int num2 = 700;
int num3 = 400;
int num4,num5,num6;
printf("돈 얼마있니 :");
scanf("%d",&money);
for(num4=1;num4<100;num4++){
    for(num5=1;num5<100;num5++){
        for(num6=1;num6<100;num6++){
            if((num4*num1+num5*num2+num6*num3) == money)
            printf("크림빵 %d개,새우깡 %d개,콜라 %d개\n",num4,num5,num6);
        }
    }
}

}