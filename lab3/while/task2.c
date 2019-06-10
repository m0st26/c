#include <math.h>
double summ2(double eps)
{
    double s = 0;
    int i = 0;
	while (1)
	{
	    double a =  (pow(-1,i))*((double)(i+1)/(double)(pow(i,3)-pow(i,2)+1));
        if (fabs(a) <= eps)
        {
            return s;
        }
	    s += a;
	    ++i;
	}
}
