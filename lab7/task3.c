#include <stdio.h>
#include <stdlib.h>
int strlen(const char *str) {
	int i = 0;
	while (*(str + i) != '\0') {
		i++;
	}
	return i;
}
char *find(const char *str, const char *substr) {
	int quantity_str = 0, quantity_substr = 0;
	quantity_str = strlen(str);
	quantity_substr = strlen(substr);
	for (int i = 0; i <= quantity_str - quantity_substr; i++) {
		int j = 0;
		if (*(str+i) == *(substr+j)) {
			while (*(str+i+j) == *(substr+j)) {
				j++;
				if (j == quantity_substr) {
					return i;
				}
			}
		}
	}
	return -1;
}
char *delete(char *str, const char *substr) {
	int first_pos = find(str, substr);
	char *new_str = (char *)malloc((strlen(str) - strlen(substr)+1) *sizeof(char));
	*(new_str + (strlen(str) - strlen(substr))) = '\0';
	int k = 0;
	while (k != first_pos) {
		*(new_str + k) = *(str + k);
		k++;
	}
	int j = 0;
	while (k != strlen(str) - strlen(substr)) {
		*(new_str + k) = *(str + first_pos + strlen(substr)+j);
		k++;
		j++;
	}
	return new_str;
}