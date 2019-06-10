int strlen(const char *str) {	//task1
	int i = 0;
	while (str[i] != 0) {
		i++;
	}
	return i;
}
char *find(const char *str, const char *substr) {	//task2
	int quantity_str = 0, quantity_substr = 0;	
	quantity_str = strlen(str);
	quantity_substr = strlen(substr);
	for (int i = 0; i <= quantity_str - quantity_substr; i++) {
		int j = 0;
		if (str[i] == substr[j]) {
			while (str[i + j] == substr[j]) {
				j++;
				if (j == quantity_substr) {
					return i;
				}
			}
		}
	}
	return -1;
}
void delete(char *str, const char *substr) {	//task3
	int first_pos = find(str, substr);
	for (int i = first_pos; i < strlen(str) - strlen(substr);i++) {
		str[i] = str[i + strlen(substr)];
	}
	for (int i = strlen(str) - strlen(substr); i < strlen(str); i++) {
		str[i] = 0;
	}
}void strcpy(char *dest, int len, const char *src) {	//task4
	if (strlen(src) > len) {
		int i;
		for (i = 0; i < len - 1; i++) {
			dest[i] = src[i];
		}
		dest[i] = '\0';
	}
	else {
		int i;
		for (i = 0; i < strlen(src); i++) {
			dest[i] = src[i];
		}
		dest[i] = '\0';
	}
}
void strcat(char* dest, int len, const char* first, const char* second) {	//task5
	dest[len] = '\0';
	if (strlen(first) + strlen(second) < len) {
		int k = 0;
		while (dest[k] != '\0') {
			for (int i = 0; i < strlen(first); i++) {
				dest[k] = first[i];
				k++;
			}
			for (int i = 0; i < strlen(second); i++) {
				dest[k] = second[i];
				k++;
			}
			dest[k] = '\0';
			break;
		}	
	}
	else {
		int i;
		int k = 0;
		for (i = 0; i < strlen(first); i++) {	
			if (i == len) {
				break;
			}
				dest[i] = first[k];
				k++;
			}
		k = 0;
		for (i = strlen(first); i < strlen(first) + strlen(second); i++) {
			if (i == len) {
				break;
			}
			dest[i] = second[k];
			k++;
		}
		dest[i] = '\0';
	}
}
_Bool insert(const char *src, const char *str, int index, char *dest, int len) {	//task6
	if (strlen(src) + strlen(str) < len) {
		strcpy(dest, len, src);
		for (int i = strlen(src)-1; i >= index;i--) {
			dest[i + strlen(str)] = dest[i];
		}
		dest[strlen(src) + strlen(str)] = '\0';
		for (int i = 0; i < strlen(str); i++) {
			dest[index + i] = str[i];
		}
		return 1;
	}else{
		return 0;
	}
}

