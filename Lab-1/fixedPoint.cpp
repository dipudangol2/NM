#include <stdio.h>
#include <conio.h>
#include <math.h>

float G(float x)
{
   return (sin(x) + 2) / 5;
}

int main()
{
   float x0, x1, E, Era;
   printf("4. Program to demonstrate Fixed Point Iteration Method\n");
   printf("Enter the initial value and Precision. \n");
   scanf("%f %f", &x0, &E);
   while (1)
   {
      x1 = G(x0);
      Era = (x1 - x0) / x1;
      if (abs(Era) > E)
      {
         x0 = x1;
      }
      else
      {
         printf("Root is %f\n", x1);
         break;
      }
   }
   return 0;
}