#include <stdio.h>
#include <math.h>

void ShellSort(int a[], int n)
{
    int i, j, step;
    int tmp;
    for (step = n / 2; step > 0; step /= 2)
    {
	
        for (i = step; i < n; i++)
        {
            tmp = a[i];
            for (j = i; j >= step; j -= step)
            {
                if (tmp < a[j - step])
                    a[j] = a[j - step];
                else
                    break;
            }
            a[j] = tmp;
        }


void main()
{
    const int n = 6;
    int a[]={4,3,6,2,1,5};
    int i;
    ShellSort(a, n);
    system("pause");
    return 0;
}
