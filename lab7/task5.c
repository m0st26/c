#include <stdio.h>
#include <stdlib.h>
char *strcat(const char *first, const char *second) {
	char *buf = (char *)malloc((strlen(first) + strlen(second)+1) * sizeof(*buf));
	*(buf + strlen(first) + strlen(second)) = '\0';
	int k = 0;
	while (*(first + k) != '\0') {
		*(buf + k) = *(first + k);
		k++;
	}
	int j = 0;
	while (*(second + j) != '\0') {
		*(buf + k) = *(second + j);
		k++;
		j++;
	}
	return buf;
}
