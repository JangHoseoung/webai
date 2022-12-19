#include <stdio.h>
int main()
{
	int n,k=0,g=1;
	printf("입력");
	scanf("%d", &n);
	while(1)
	{
		g =2*g;
		if(g>n)
			break;
		k++;
	}
	printf("%d", k);
}
