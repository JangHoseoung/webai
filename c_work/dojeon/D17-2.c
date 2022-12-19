#include <stdio.h>

int main()
{
	int num, k=0;

	printf("상수 n 입력: ");
	scanf("%d", &num);

	while (1 << k <= num)  //2진수 써라 1<<k계산 부터 하고 ㄱ k가 2에 제곱
		k++;
	printf("공식을 만족하는 k의 최댓값: %d", --k);
	return 0;
}