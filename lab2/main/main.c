    
#include <stdio.h>
#include "task1.c"
#include "task2.c"
#include <locale.h>

//������� 10 (50 �� ������)

void main(){
	setlocale(LC_ALL, "Rus");
	printf("������� ����� �������:\n1 - ������� 1\n2 - ������� 2\n");
	float x, y;
	switch (_getch())
	{
		case '1':
			printf("������� 1\nEnter x:\n");
			scanf("%f", &x);
			printf("Enter y:\n");
			scanf("%f", &y);
			isInArea(x, y) ? printf("������ � �������.\n") : printf("�� ������ � �������.\n");
			break;
				
		case '2':
			printf("������� 2\nEnter x:\n");	
			scanf("%f", &x);
			printf("%f", f(x));
			break;
				
		default:
			printf("����������� ��������� ������.");
			break;
	}
	system("pause");
}
