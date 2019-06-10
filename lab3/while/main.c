#include <stdio.h>
#include "task1.c"
#include "task2.c"
#include "task3.c"
#include "task4.c"
#include "task5.c"
int main(void)
{
    int n;
    int k;
    int ir;
    double eps;
    double r;
    while (1)
    {
        system("cls");
        printf("1 - Task1\n2 - Task2\n3 - Task3\n4 - Task4\n5 - Task5\n6 - Exit\r\n");
        char answer = _getch();
        system("cls");
        switch (answer)
        {
        case '1':
            printf("\nEnter n:\n");
            scanf("%i", &n);
            printf("\n");
            r = summ(n);
            printf("%lf\n", r);
            break;
        case '2':
            printf("\nEnter eps:\n");
            scanf("%lf", &eps);
            printf("\n");
            r = summ2(eps);
            printf("%lf\n", r);
            break;
        case '3':
            printf("\nEnter n:\n");
            scanf("%i", &n);
            printf("\nEnter k:\n");
            scanf("%i", &k);
            printf("\n");
            print(n, k);
            break;
        case '4':
            printf("\nEnter eps:\n");
            scanf("%lf", &eps);
            printf("\n");
            ir = findFirstElement(eps);
            printf("%i\n", ir);
            break;
        case '5':
            printf("\nEnter eps:\n");
            scanf("%lf", &eps);
            printf("\n");
            ir = findFirstNegativeElement(eps);
            printf("%i\n", ir);
            break;
        case '6':
            return 0;
            break;
        default:
            printf("Invalid input\n");
            break;
        }
        system("pause");
    }
    return 0;
}
