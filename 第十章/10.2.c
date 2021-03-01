#include<stdio.h>
double source[5]={1.1,2.2,3.3,4.4,5.5};
double target1[5]={0};
double target2[5]={0};
double target3[5]={0};
void print();
void copy_arr(double target[],double source[],int i);
void copy_ptr(double *target,double *source,int i);
void copy_ptrs(double *target,double *source,double *source_end);
int main(){
	print();
	copy_arr(target1,source,5);
	copy_ptr(target2,source,5);
	copy_ptrs(target3,source,source+5);
	printf("\nen..............\n\n");
	print();
}

void copy_arr(double target[],double source[],int i){
	for(int j=0;j<i;j++){
		target[i]=source[i];
	}
}

void copy_ptr(double *target,double *source,int i){
	for(int j=0;j<i;j++){
		*(target+j)=*(source+j);
	}
}

void copy_ptrs(double *target,double *source,double *source_end){
	for(double *j=source;j<source_end;j++){
		*target++ =*j;
	}
}

void print(){
	printf("source\n");
	for(int j=0;j<5;j++){
		printf("%.1f ",source[j]);
	}
	printf("\n");
	printf("target1\n");
	for(int j=0;j<5;j++){
		printf("%.1f ",target1[j]);
	}
	printf("\n");
	printf("target2\n");
	for(int j=0;j<5;j++){
		printf("%.1f ",target2[j]);
	}
	printf("\n");
	printf("target3\n");
	for(int j=0;j<5;j++){
		printf("%.1f ",target3[j]);
	}
	printf("\n");
}
















