#include <math.h>

double f(double x) //Прототип ф-и
{
if (x>3)
return (-3*x+9);
else if (x<=3)  
return (float)(pow(x,3)/(pow(x,2)+8)) ;
}
