#include <stdio.h>

int main(void)
{
	int n1,n2,n3;
	scanf("%d %d", &n1, &n2);
	if(n1>n2)
	{
		n1=n3;
		n1=n2;
		n2=n3;
	}
	for(int i=n1; i<=n2; i++)
	{
		for(int z=1; z<=9; z++)
		{
			printf("%d X %d = %d\n", i,z,i*z);
		}
		printf("\n");
	}
}
