
#include <stdio.h>
#include <math.h>

//Вариант 40

//добавим портотип функции
float func(float x);

void main(){
	float x = 5;
	float fx = func(x);
	printf("x =  %f\nf(x) = %f", x, fx);
	printf("\nEnter x:\n");
	scanf("%f", &x);
	fx = func(x);
	printf("x =  %f\nf(x) = %f", x, fx);
}

float func(float x){
	float f = (float) 1/4-1/4*sin(5/2*3.14-8*x);
	return f;
}
