#include <stdio.h>

void main(){
    double num = 3.14;
    double *ptr = &num;
    double **dptr = &ptr;

    printf("num = %8g\n",num); //8칸 띄우고 출력
    printf("&num = %d\n",&num);
    printf("\n");
    printf("ptr = %d\n",ptr);
    printf("*ptr = %7g\n",*ptr);
    printf("&ptr = %d\n",&ptr);
    printf("\n");
    printf("dptr = %d\n",dptr);
    printf("*dptr = %d\n",*dptr);
    printf("**dptr = %6g\n",**dptr);
}