#include<stdio.h>
#include<float.h>
int main(){
	float a = 1.0/3.0;
	double b = 1.0/3.0;
	printf("%.6f %.6f\n",a,b);
	printf("%.12f %.12f\n",a,b);
	printf("%.16f %.16f\n",a,b);
	printf("%f %f\n",FLT_DIG,DBL_DIG);
	printf("%d %d\n",FLT_DIG,DBL_DIG);
	return 0;
}
