#include <stdio.h>
#include <stdlib.h>
char *strcpy(const char *src) {
	int str_len = strlen(src);
	char *buf = (char *)malloc((str_len+1) * sizeof(char));
	*(buf + str_len) = '\0';
	int k = 0;
	while (*(src+k) != '\0') {
		*(buf+k) = *(src+k);
		k++;
	}
	return buf;
}