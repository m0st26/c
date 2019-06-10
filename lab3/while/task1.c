#include <math.h>
double summ(int n)
{
    double s = 0;
    int i = 0;

	while (i < n - 1)
	{
	    double a =  (pow(-1,i))*((double)(i+1)/(double)(pow(i,3)-pow(i,2)+1));
	    s += a;
	    ++i;
	}

	return s;
}
