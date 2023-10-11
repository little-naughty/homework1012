#include<stdio.h>

int main()
{
	int a = 0,b = 0,c = 0,x = 0;
	while(x == 0)
	{
		printf("Enter three different number¡G\n");
		scanf("%d%d%d", &a, &b, &c);
		if (a > b && b > c)
		{
			printf("%d is the largest and %d is the smallest\n",a,c);
		}
		else if (a > b && b < c && a > c)
		{
			printf("%d is the largest and %d is the smallest\n",a,b);
		}
		else if (a < b && b > c && a < c)
		{
			printf("%d is the largest and %d is the smallest\n",b,a);
		}
		else if (a < b && a > c && c < b)
		{
			printf("%d is the largest and %d is the smallest\n",b,c);
		}
		else if (a < b && b < c)
		{
			printf("%d is the largest and %d is the smallest\n",c,a);
		}
		else if (a < c && b < c && a > b)
		{
			printf("%d is the largest and %d is the smallest\n",c,b);
		}
	}
	return 0;
}