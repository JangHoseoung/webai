#include <stdio.h>

int main(void) {
	int num, i = 0;
	int arr[num];

	printf("10진수 정수 입력: ");
	scanf("%d", &num);

	while (num / 2 > 0) {
		arr[i] = num%2; //나머지
		num = num/2; //몫
		i++;
	}
	
    arr[i] = 1;

	for (int j = i; j >= 0; j--) {
		printf("%d", arr[j]);
	}

}