#include <stdio.h>

int main()
{
	int a = 0 , x = 0;
	while (x == 0)
	{
		printf("Enter a number\n");
		scanf("%d", &a);
		if (a % 2 == 0)
		{
			printf("%d is an even number\n",a);
		}
		else
		{
			printf("%d is a odd number\n",a);
		}
	}
	return 0;
}