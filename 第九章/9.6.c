#include<stdio.h>
void larger_of(double *i,double *j,double *k);
int main(){
	double x=5.0,y=2.0,z=3.0;
	printf("初始：x=%f y=%f z=%f\n",x,y,z);
	larger_of(&x,&y,&z);
	printf("结束：x=%f y=%f z=%f\n",x,y,z);
	return 0;
}

void larger_of(double *i,double *j,double *k){
	double temp;
	if(*i>*j) {//第一个大于第二个
		temp = *i;
		*i=*j;
		*j=temp;
	}
	if(*i>*k) {//第一个大于第三个
		temp = *i;
		*i=*k;
		*k=temp;
	}
	if(*j>*k) {//第二个大于第三个
		temp = *j;
		*j=*k;
		*k=temp;
	}
}