#include <stdio.h>
#include <math.h>
void main()
{
double base, exponent, result;
printf("Enter a base number: ");
scanf("%lf", &base);
printf("Enter an exponent: ");
scanf("%lf", &exponent);
result = pow(base, exponent);
printf("%.1lf^%.1lf = %.2lf", base, exponent, result);
return 0;
}
