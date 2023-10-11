#include<stdio.h>

int main()
{
	for (int x = 1; x <= 9; x++)
	{
		printf("\n");
		for (int y = 1; y <= 9; y++)
		{
			if ((x == 1 || x == 9) && y == 5)
			{
				printf("*");
			}
			else if ((x == 2 || x == 8) && (y == 4 || y == 6))
			{
				printf("*");
			}
			else if ((x == 3 || x == 7) && (y == 3 || y == 7))
			{
				printf("*");
			}
			else if ((x == 4 || x == 6) && (y == 2 || y == 8))
			{
				printf("*");
			}
			else if (x == 5 && (y == 1 || y == 9))
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