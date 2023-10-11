#include<stdio.h>

int main()
{
	for (int x = 1; x <= 9; x++)
	{
		printf("\n");
		for (int y = 1; y <= 5; y++)
		{
			if (x == 1 && y == 3)
			{
				printf("*");
			}
			else if (x == 2 && y >= 2 && y <= 4)
			{
				printf("*");
			}
			else if (x == 3 && y >= 1 && y <= 5)
			{
				printf("*");
			}
			else if (x >= 4 && x <=9 && y == 3)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
	}
	return 0;
}