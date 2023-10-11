#include<stdio.h>

int main()
{
	for (int x = 1; x <= 17; x++)
	{
		printf("\n");
		for (int y = 1; y <= 9; y++)
		{
			if (x == 1)
			{
				printf("P");
			}
			else if (x == 2 && (y == 5 || y == 9))
			{
				printf("P");
			}
			else if (x == 3 && (y == 5 || y == 9))
			{
				printf("P");
			}
			else if (x == 4 && (y == 5 || y == 9))
			{
				printf("P");
			}
			else if (x == 5 && (y == 6 || y == 8))
			{
				printf("P");
			}
			else if (x == 7 && (y == 3 || y == 4))
			{
				printf("J");
			}
			else if (x == 8 && y == 2)
			{
				printf("J");
			}
			else if (x == 9 && y == 1)
			{
				printf("J");
			}
			else if (x == 10 && y == 2)
			{
				printf("J");
			}
			else if (x == 11 && y >= 3 && y <= 9)
			{
				printf("J");
			}
			else if (x == 13)
			{
				printf("D");
			}
			else if (x == 14 && (y == 1 || y == 9))
			{
				printf("D");
			}
			else if (x == 15 && (y == 1 || y == 9))
			{
				printf("D");
			}
			else if (x == 16 && (y == 2 || y == 8))
			{
				printf("D");
			}
			else if (x == 17 && y >= 3 && y <= 7)
			{
				printf("D");
			}
			else
			{
				printf(" ");
			}
		}
	}
	return 0;
}