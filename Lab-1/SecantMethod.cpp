// Secant Method
#include <stdio.h>

#include <math.h>

float f(float x)
{
	return (x * x + log(x) - 3);
}

int main()
{
	float x0, x1, x2, fx1, fx0, E, Era;
	printf("2. Program to demonstrate Secant Method\n");
	printf("Enter the initial guess and Error.\n");
	scanf("%f %f %f", &x0, &x1, &E);
	while (1)
	{
		fx0 = f(x0);
		fx1 = f(x1);
		x2 = x1 - ((fx1 * (x1 - x0)) / (fx1 - fx0));
		Era = (x2 - x1) / x2;
		if (abs(Era) > E)
		{
			x0 = x1;
			x1 = x2;
		}
		else
		{
			printf("Root = %f\n", x2);
			break;
		}
	}

	return 0;
}
