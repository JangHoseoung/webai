#include <stdio.h>

int main(){
    int arr[6] = {1,2,3,4,5,6};
    int *a = &arr[0];
    int *b = &arr[5];
    int i;
    int temp;
    for(i=0;i<3;i++){
       temp = *a;
       *a = *b;
       *b = temp;
       a+=1;
       b-=1;
    }
    for(i = 0;i<6;i++){
    printf(" %d ",arr[i]);}
    


}