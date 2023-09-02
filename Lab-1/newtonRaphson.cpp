#include <stdio.h>
#include <conio.h>
#include <math.h>

float f(float x)
{
   return (x * x + 2 * x - 2);
}

float fd(float x)
{
   return (2 * x + 2);
}

int main()
{
   float x0, x1, fx0, fdx0, E, Era;
   printf("3. Program to demonstrate Newton Raphson's Method\n");
   printf("Enter the initial guess and Error.\n");
   scanf("%f %f", &x0, &E);
   while (1)
   {
      fx0 = f(x0);
      fdx0 = fd(x0);
      x1 = (x0 - (fx0 / fdx0));
      Era = (x1 - x0) / x1;
      if (abs(Era) > E)
      {
         x0 = x1;
      }
      else
      {
         printf("The root is %f.\n", x1);
         break;
      }
   }
   return 0;
}