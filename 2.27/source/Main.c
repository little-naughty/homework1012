#include <stdio.h>

int main()
{
	printf("    *    \n");
	printf("   ***   \n");
	printf("  *****  \n");
	printf(" ******* \n");
	printf("*********\n");

	for (int x = 1; x <= 5; x++)
	{
		printf("\n");
		for (int y = 1; y <= 9; y++)
		{
			if ((x == 1 && y == 5) || (x == 2 && y >= 4 && y <= 6) || (x == 3 && y >= 3 && y <= 7) || (x == 4 && y >= 2 && y <= 8) || (x == 5 && y >= 1 && y <= 9))
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