#include<stdio.h>

int main()
{
	printf("number\tsquare\tcube\n");
	int a = 0, b = 0;
	for (int i = 1; i <= 10; i++)
	{
		a = i * i;
		b = i * i * i;
		printf("%d\t%d\t%d\n",i,a,b);
	}
	return 0;
}