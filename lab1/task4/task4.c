#include <stdio.h>
#include <math.h>

//Вариант 40
float x, result;
void main(){
	x=5;
	func();
	printf("x =  %f\nf(x) = %f", x, result);
	
	printf("\nEnter x:\n");
	scanf("%f", &x);
	func();
	printf("x =  %f\nf(x) = %f", x, result);
}
void func(){
	result = (float) 1/4-1/4*sin(5/2*3.14-8*x);
}
