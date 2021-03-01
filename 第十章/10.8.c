#include<stdio.h>
void copy_ptrs(double *target,double *source,double *source_end);
double a[7]={1.1,2.2,3.3,4.4,5.5,6.6,7.7};
double b[3];
void print(double a[]);
int main(){
	copy_ptrs(b,a+2,a+5);
	print(b);
	return 0;
}

void copy_ptrs(double *target,double *source,double *source_end){
	for(double *j=source;j<source_end;j++){
		*target++ =*j;
	}
}

void print(double a[]){
	for(int j=0;j<3;j++){
		printf("%.1f ",a[j]);
	}
	printf("\n");
}










