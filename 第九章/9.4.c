#include<stdio.h>
double i,j;
double output;
double suan(double i,double j);
int main(){
	output=suan(2,3);
	printf("%f\n",output);
	return 0;
}

double suan(double i,double j){
	double x;
	x=1/((1.0/i+1.0/j)/2);
	return x;
}