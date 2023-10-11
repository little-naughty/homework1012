#include<stdio.h>

int main()
{
	int a = 0, b = 0, x = 0;
	while (x == 0)
	{
		printf("Ender two number¡G\n");
		scanf("%d%d", &a, &b);
		if (a % b == 0)
		{
			printf("%d is mulple of %d\n",a,b);
		}
		else
		{
			printf("%d is not mulple of %d\n",a,b);
		}
	}
	return 0;
}