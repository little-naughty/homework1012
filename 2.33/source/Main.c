#include <stdio.h>

int main()
{
	int x = 0,a = 0,b = 0,c = 0,d = 0,e = 0,t = 0;
	while (x == 0)
	{
		printf("Enter total driven per day¡G");
		scanf("%d", &a);
		printf("Enter cost per gallon of gasoline¡G");
		scanf("%d", &b);
		printf("Enter average miles per gallon¡G");
		scanf("%d", &c);
		printf("Enter parking fees per day¡G");
		scanf("%d", &d);
		printf("Enter tolls per day¡G");
		scanf("%d", &e);
		t = a / c * b + d + e;
		printf("%d\n\n", t);
	}
	return 0;
}