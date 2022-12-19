#include <stdio.h>

int retk(int n){
    int result = 1; //result = 2**k<=n
    // n = 1
    // n = 2
    // n = 3
    for (int i =1; i<n;i++){
        result = result * 2;
        if( result > n)
            return i-1;
    }

}

int main(){

    int n;
	printf("정수입력");
	scanf("%d", &n);

    printf("retk(%d) k = %d",n,retk(n));
}