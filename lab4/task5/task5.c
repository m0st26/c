#include <stdio.h>
#include <conio.h>
#include <time.h>
#define N 10
void sortStackArray(int *arr, int n) {
	//Инициализация массива
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	//Массив без сортировки
	printf("Array before sorting: ");
	for (int i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}
	//Сортировка Шелла
	int j, step, tmp;
	for (step = n / 2; step > 0; step /= 2) {
		for (int i = step; i < n; i++) {
			tmp = arr[i];
			for (j = i; j >= step; j -= step) {
				if (tmp < arr[j - step]) {
					arr[j] = arr[j - step];
				}
				else {
					break;
				}
			}
			arr[j] = tmp;
		}
	}
	//Массив после сортировки
	printf("\nArray after sorting: ");
	for (int i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}