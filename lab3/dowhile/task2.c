#include <math.h>
//Ârdcrín 4
double summ2(double eps)
{
    double s = 0;
    int i = 0;
	do
	{
	    double a =  (pow(-1,i))*((double)(i+1)/(double)(pow(i,3)-pow(i,2)+1));
        if (fabs(a) <= eps)
        {
            return s;
        }
	    s += a;
	    ++i;
	} while (1);
}
