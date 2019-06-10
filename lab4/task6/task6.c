#include <stdio.h>
#include <time.h>
#include "task1.h"
#include "task5.h"
#define N 10

void main() {
	_Bool menu=1;
	int Number;
	while (menu !=0) {
		system("cls");
		printf("1. task 1\n2. task 5\n3. exit\nInput task number: ");
		scanf("%d", &Number);
		switch (Number)
		{
		case 1: {
			system("cls");
			double x = 3, result;
			f(&x, &result);
			printf("%.4f\n", result);
			scanf("%Lf", &x);
			f(&x, &result);
			printf("%.4f\n", result);
			system("pause");
			break;
		}
		case 2: {
			system("cls");
			printf("Elements: %d\n", N);
			int arr[N];
			sortStackArray(arr, N);
			system("\npause");
			break;
		}
		case 3: {
			menu = 0;
			break;
		}
		default:
			printf("Wrong task.\n");
			break;
		}
	}
}