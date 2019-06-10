#include <stdio.h>
#include <math.h>
void print(int n, int k)
{
    int l=0;
    int i = 0;
    while (1)
    {
       double a =  (pow(-1,i))*((double)(i+1)/(double)(pow(i,3)-pow(i,2)+1));
        l+=1;
        if (l == k)
        {
            l = 0;
            ++i;
            continue;
        }
        printf("%.4f\n", a);
        n = n - 1;
        if (n == 0)
            break;
        ++i;
    }
}
