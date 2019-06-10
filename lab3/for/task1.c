#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

double summ(int n) {
	int i;
	double s = 0;
		for (i = 0; i < n - 1 ; ++i)
		{		
		 double a =  (pow(-1,i))*((double)(i+1)/(double)(pow(i,3)-pow(i,2)+1));
		 s+=a;
	}
	return s;
}
