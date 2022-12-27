#include <stdio.h>

int main(){

int a[10],num,h=0,j=9; //반대로 --
 
for(int i;i<10;i++){
    printf("정수를 입력 하시오");
    scanf("%d",&num);
    if(num%2 == 1)
    {a[h]=num;
    h++;}
    else
    {a[j]=num;
    j--;}
}
printf("배열은 ");
for(int i =0; i<10;i++){
    printf("%d",a[i]);

}
}