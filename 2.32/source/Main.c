#include <stdio.h>
#include <math.h>

int main()
{
	int x = 0;
	float h = 0, w = 0, BMI = 0;
	while (x == 0)
	{
		printf("Enter your height(cm)¡G");
		scanf("%f", &h);
		printf("Enter your weight(kg)¡G");
		scanf("%f", &w);
		BMI = w / pow((h / 100), 2);
		printf("Your BMI is %3.1f\n", BMI);
		if (BMI <= 18.5)
		{
			printf("Underweight\n\n");
		}
		else if (BMI > 18.5 && BMI <= 24.9)
		{
			printf("Normal\n\n");
		}
		else if (BMI >= 25 && BMI <= 29.9)
		{
			printf("Overweight\n\n");
		}
		else
		{
			printf("Obese\n\n");
		}
	}
	return 0;
}