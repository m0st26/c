#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void writeArray (int *arr, int n, int r) {
	int i;
	for (i=0;i<r;++i)
	{
		printf("%i ",arr[i]);
	}
	system("pause");
}
void main()
{
	int i;
	int n;
	int r;
	printf("first n =");
	scanf("%i",&n);
	printf("array range =");
	scanf("%i",&r);
	int a[r];
	for (i=0;i<r;++i)
	{
		a[i] =n;
		++n;
	}
	writeArray(a,n,r);
}
