#include <stdio.h>
#include "task6_func.c"
//Вараинт 40
extern float x, result;
extern void func();
void main(){
	x=5;
	func();
	printf("x =  %f\nf(x) = %f", x, result);
	printf("\nEnter x:\n");
	scanf("%f", &x);
	func();
	printf("x =  %f\nf(x) = %f", x, result);
}
