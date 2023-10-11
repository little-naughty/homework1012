#include<stdio.h>
#include<stdlib.h>

int main()
{
	int length = 10;
	for (int x = 1; x <= 10; x++)
	{
		printf("\n");
		for (int y = 1; y <= length; y++)	
		{
			if (x == 1 || y == 1 || x == length || y == length)
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