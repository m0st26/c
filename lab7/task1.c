#include <stdio.h>
#include <stdlib.h>
void incrementHeapVariable() {
	int *p = (int*) malloc(sizeof(int));
	*p = 10;
	printf("Address: %p\np= %d\n", p, *p);
	(*p)++;
	printf("Address: %p\np= %d\n", p, *p);
	free(p);
}