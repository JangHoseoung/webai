#include <stdio.h>

int main(){
    int A,Z;
    int total;
    for(A=0;A<10;A++){
        for(Z=0;Z<10;Z++)
        {
            if(A==Z)
            continue;
            total = (10*A+Z)+(A+10*Z);
            if(total == 99)
            printf("%d%d+%d%d=%d\n",A,Z,Z,A,total);
        }
    }
}