#include<stdio.h>

int main()
{
	for (int x = 1; x <= 9; x++)
	{
		printf("\n");
		for (int y = 1; y <= 7; y++)
		{
			if (y >= 3 && y <= 5 && x == 1)
			{
				printf("*");
			}
			else if (y >= 3 && y <= 5 && x == 9)
			{
				printf("*");
			}
			else if (x >= 3 && x <= 7 && y == 7)
			{
				printf("*");
			}
			else if (x >= 3 && x <= 7 && y == 1)
			{
				printf("*");
			}
			else if (x == 2 && (y == 2 || y == 6))
			{
				printf("*");
			}
			else if (x == 8 && (y == 2 || y == 6))
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