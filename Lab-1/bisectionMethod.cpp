// program to demonstrate bisection method
#include <stdio.h>
#include <conio.h>
#include <math.h>

float f(float x)
{
	return (sin(x) * x * x + exp(-x) - 3);
}

int main()
{
	float xl, xm, xu, fxl, fxm, fxu, E, Era;

	printf("1. Program to demonstrate bisection method\n");
	printf("Enter initial braket and error \n");
	scanf("%f %f %f", &xl, &xu, &E);

	while (1)
	{
		fxl = f(xl);
		fxu = f(xu);
		xm = (xl + xu) / 2;
		fxm = f(xm);
		if ((fxl * fxm == 0))
			printf("Root = %f\n", xm);
		else if ((fxl * fxm) < 0)
			xu = xm;
		else
			xl = xm;
		Era = (xu - xl) / xu;
		if (Era < E)
		{
			printf("Root = %f\n", xm);
			break;
		}
	}
	getch();
}
