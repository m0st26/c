#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void f (const double *x, double *result)
{
		*result = (double) 1/4-1/4*sin(5/2*3.14**x);
}
void main ()
{
	double x = 5;
	double result;
	f(&x,&result);
	printf("x =  %.4lf\n(x) = %.4lf", x, result);
	printf("\nEnter x:\n");
	scanf("%lf", &x);
	f(&x,&result);
	printf("x =  %f\nf(x) = %f",x, result);
	system ("pause");
}
