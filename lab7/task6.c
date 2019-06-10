#include <stdio.h>
#include <stdlib.h>
char *insert(const char *src, const char *str, int index) {
	char *buf = (char *)malloc((strlen(src)+strlen(str)+1)*sizeof(*buf));
	*(buf + strlen(src) + strlen(str)) = '\0';
	int k = 0;
	while (k != index) {
		*(buf + k) = *(src + k);
		k++;
	}
	int j = 0;
	while (j!=strlen(str)) {
		*(buf + k) = *(str+j);
		k++;
		j++;
	}
	j = 0;
	while (j!=strlen(src)-index) {
		*(buf + k) = *(src + index + j);
		k++;
		j++;
	}
	return buf;
}