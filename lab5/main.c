#include "stdio.h"
#include "functions.h"

void main() {
	_Bool menu = 1;
	int Number;
	while (menu != 0) {
		system("cls");
		printf("1. task 1\n2. task 2\n3. task 3\n4. task 4\n5. task 5\n6. task 6\n7. exit\nInput task number: ");
		scanf("%d", &Number);
		switch (Number)
		{
		case 1: {
			system("cls");
			char str[20];
			scanf("%s", &str);
			int n;
			n = strlen(str);
			printf("Elements: %d\n", n);
			system("pause");
			break;
		}
		case 2: {
			system("cls");
			char str[50] = "Unfortunate";
			char substr[10];
			int N;
			printf("Input substr: ");
			scanf("%s", &substr);
			N = find(str, substr);
			printf("Result: %d\n", N);
			system("pause");
			break;
		}
		case 3: {
			system("cls");
			char str[50] = "Unfortunate";
			char substr[10];
			printf("Original str: %s\n", str);
			printf("Input substr: ");
			scanf("%s", &substr);
			delete(str, substr);
			printf("Result: %s\n", str);
			system("pause");
			break;
		}
		case 4: {
			system("cls");
			char str[12];
			char dest[10];
			int len = 10;
			printf("Input str: ");
			scanf("%s", &str);
			strcpy(dest, len, str);
			printf("Result: %s\n", dest);
			system("pause");
			break;
		}
		case 5: {
			system("cls");
			char dest[20];
			int len = 20;
			char first[20];
			char second[20];
			printf("Input first word: ");
			scanf("%s", &first);
			printf("Input second word: ");
			scanf("%s", &second);
			strcat(dest, len, first, second);
			printf("Result: %s",dest);
			system("pause");
			break;
		}
		case 6: {
			system("cls");
			char str[20];
			char str_in[10];
			char dest[30];
			int len = 25;
			int index;
			printf("Input str: ");
			scanf("%s", &str);
			printf("Input str_in: ");
			scanf("%s", &str_in);
			printf("Input index to insert: ");
			scanf("%d", &index);
			if (insert(str, str_in, index, dest, len) == 1) {
				printf("Result: %s\n", dest);
			}
			else {
				printf("Line length is longer than the buffer");
			}
			system("pause");
			break;
		}
		case 7: {
			menu = 0;
			break;
		}

		default:
			printf("Wrong task.\n");
			break;
		}
	}
}