#include <stdio.h>

int main(){
    int num1, num2; 
    for(num1=1;num1<10;num1++){
        if(num1%2!=0)
            continue;
    for(num2=num1;num2<10;num2++){
        if(num1<num2){
            break;}
            printf("%d * %d = %d",num1,num2,num1*num2);
    }
        printf("\n");
    }
    return 0;
}