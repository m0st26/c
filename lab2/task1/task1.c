#include <math.h>

 _Bool isInArea(double x, double y)
{
if (x*y>0 && abs(x)*abs(y)<=1)
return 1;
else 
return 0;
}
