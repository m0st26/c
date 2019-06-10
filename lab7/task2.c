#include <stdio.h>
#include <stdlib.h>
void writeArray(int *arr, int n) {
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
}
void readArray(int *arr, int n) {
	printf("Input elements of array:\n");
	for (int i = 0; i < n; i++) {		
		printf("a[%d] = ", i);
		scanf("%d", &arr[i]);
	}
	system("cls");
}
void sort(int *arr, int n) {		//Сортировка Шелла
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
}
void sortHeaparray(int *arr,int n){
	arr = (int *)malloc(n * sizeof(int));
	readArray(arr, n);
	printf("Original array: ");
	writeArray(arr, n);
	sort(arr, n);
	printf("\nSorted array: ");
	writeArray(arr, n);
	printf("\n");
	free(arr);
}