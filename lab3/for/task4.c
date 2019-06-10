#include <math.h>
int findFirstElement(double eps)
{
int i;
    for (i = 0;;++i)
    {
        double a =  (pow(-1,i))*((double)(i+1)/(double)(pow(i,3)-pow(i,2)+1));
        if (fabs(a) <= eps)
        {
            return i+1;
            break;
        }
    }
}
