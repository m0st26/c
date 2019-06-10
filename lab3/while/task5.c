#include <math.h>
int findFirstNegativeElement(double eps)
{
    int i = 0;
    while (1)
    {
double a =  (pow(-1,i))*((double)(i+1)/(double)(pow(i,3)-pow(i,2)+1));
        if ((a < 0) && (fabs(a) <= eps))
        {
            return i+1;
        }
        ++i;
    }
}
