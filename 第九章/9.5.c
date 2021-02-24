#include<stdio.h>
void larger_of(double *i,double *j);
int main(){
	double x=1.0,y=2.0;
	printf("初始：x=%f y=%f\n",x,y);
	larger_of(&x,&y);
	printf("结束：x=%f y=%f\n",x,y);
	return 0;
}

void larger_of(double *i,double *j){
	if(*i>=*j) *j=*i;
	else *i=*j;
}