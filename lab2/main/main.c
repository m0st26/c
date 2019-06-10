    
#include <stdio.h>
#include "task1.c"
#include "task2.c"
#include <locale.h>

//Вариант 10 (50 по списку)

void main(){
	setlocale(LC_ALL, "Rus");
	printf("Введите номер задания:\n1 - Задание 1\n2 - Задание 2\n");
	float x, y;
	switch (_getch())
	{
		case '1':
			printf("Задание 1\nEnter x:\n");
			scanf("%f", &x);
			printf("Enter y:\n");
			scanf("%f", &y);
			isInArea(x, y) ? printf("Входит в область.\n") : printf("Не входит в область.\n");
			break;
				
		case '2':
			printf("Задание 2\nEnter x:\n");	
			scanf("%f", &x);
			printf("%f", f(x));
			break;
				
		default:
			printf("Неправильно введенные данные.");
			break;
	}
	system("pause");
}
