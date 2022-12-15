#include <stdio.h> 

int main(){
    int num1 = 2;
    int num2 = 0;
    int i = 0;

    for (num1 = 2; i < 10; num1++) {
        for (num2 = 2; num2 <= num1; num2++) {
            if (num1 % num2 == 0 && num2!= num1) 
                break;
             else if (num1 == num2) {
                printf("%d ", num1);
                i += 1;
            } else 
            continue;            
        }
    }
    return 0;
}