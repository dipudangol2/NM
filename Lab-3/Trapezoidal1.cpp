#include <stdio.h>
#include <conio.h>
#include <math.h>

/* Define function here */
#define f(x) pow(x, 3) + 1

int main()
{
    float lower, upper, integration = 0.0, stepSize, k;
    int i, subInterval;
    printf("Trapezoidal Rule:\n");
    /* Input */
    printf("Enter lower limit of integration: ");
    scanf("%f", &lower);
    printf("Enter upper limit of integration: ");
    scanf("%f", &upper);
    printf("Enter number of sub intervals: ");
    scanf("%d", &subInterval);

    /* Calculation */
    /* Finding step size */
    stepSize = (upper - lower) / subInterval;

    /* Finding Integration Value */
    integration = f(lower) + f(upper);
    for (i = 1; i <= subInterval - 1; i++)
    {
        k = lower + i * stepSize;
        integration = integration + 2 * f(k);
    }
    integration = integration * stepSize / 2;
    printf("\nIntegral Value is: %.3f\n", integration);
    getch();
    return 0;
}