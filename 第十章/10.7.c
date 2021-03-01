#include<stdio.h>
double a[3][3]={{1.1,2.2,3.3},{4.4,5.5,6.6},{7.7,8.8,9.9}};
double b[3][3]={0};
void print(double a[]);
void copy_ptr(double *target,double *source,int i);
int main(){
	printf("一开始\na:\n");
	print(a[0]);
	print(a[1]);
	print(a[2]);
	printf("b:\n");
	print(b[0]);
	print(b[1]);
	print(b[2]);
	copy_ptr(b[0],a[0],3);
	copy_ptr(b[1],a[1],3);
	copy_ptr(b[2],a[2],3);
	printf("复制之后\na:\n");
	print(a[0]);
	print(a[1]);
	print(a[2]);
	printf("b:\n");
	print(b[0]);
	print(b[1]);
	print(b[2]);
}


void copy_ptr(double *target,double *source,int i){
	for(int j=0;j<i;j++){
		*(target+j)=*(source+j);
	}
}


void print(double a[]){
	for(int j=0;j<3;j++){
		printf("%.1f ",a[j]);
	}
	printf("\n");
}