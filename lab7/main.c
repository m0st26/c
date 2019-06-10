#include <stdio.h>
#include <conio.h>
void main() {
	_Bool menu = 1;
	int Number;
	while (menu != 0) {
		system("cls");
		printf("1. task 1\n2. task 2\n3. task 3\n4. task 4\n5. task 5\n6. task 6\n7. Exit\nInput task number: ");
		scanf("%d", &Number);
		switch (Number)
		{
		case 1: {
			system("cls");
			incrementHeapVariable();
			system("pause");
			break;
		}
		case 2: {
			system("cls");
			int n, *arr = NULL;
			printf("Input n: \n");
			scanf("%d", &n);
			sortHeaparray(arr, n);
			system("pause");
			break;
		}
		case 3: {
			system("cls");
			char str[20], substr[10];
			printf("Input str: ");
			scanf("%20s", str);
			printf("Input substr: ");
			scanf("%20s", substr);
			char *result = delete(&str, &substr);
			printf("Result: %s\n", result);
			free(result);
			system("pause");
			break;
		}
		case 4: {
			system("cls");
			char str[20];
			printf("Input str: ");
			scanf("%20s", &str);
			char *result = strcpy(&str);
			printf("Result: %s\n", result);
			free(result);
			system("pause");
			break;
		}
		case 5: {
			system("cls");
			char first[20], second[20];
			printf("Input first word: ");
			scanf("%20s", &first);
			printf("Input second word: ");
			scanf("%20s", &second);
			char *result = strcat(&first, &second);
			printf("Result: %s\n", result);
			free(result);
			system("pause");
			break;
		}
		case 6: {
			system("cls");
			int n;
			char str[20], substr[20];
			printf("Input str: ");
			scanf("%20s", &str);
			printf("Input substr: ");
			scanf("%20s", &substr);
			printf("Input index to insert: ");
			scanf("%d", &n);
			char *result = insert(&str, &substr, n);
			printf("Result: %s\n", result);
			free(result);
			system("pause");
			break;
		}
		case 7: {
			menu = 0;
			break;
		}		
		default:
			printf("Wrong number.\n");
			break;
		}
	}
}