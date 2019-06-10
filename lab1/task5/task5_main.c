#include <stdio.h>
#include <math.h>
#include "task5_func.c"
//Вариант 40

void main(){
	float x = 5;
	float fx = (float) 1/4-1/4*sin(5/2*3.14-8*x);
	printf("x =  %f\nf(x) = %f", x, fx);
	
	printf("\nEnter x:\n");
	scanf("%f", &x);
	fx = func(x);
	printf("x =  %f\nf(x) = %f", x, fx);
	getchar();
}
