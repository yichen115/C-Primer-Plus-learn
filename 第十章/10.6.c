#include<stdio.h>
void print(double a[]);
double a[10]={13.5,2.4,33.2,4.36,92.1,9.3,55.1,100.2,1.2,4.5};
double b[10]={0};
void reverse(double arr[],double *arry,int num);
int main(){
	printf("一开始：\n");
	print(a);
	print(b);
	reverse(a,b,10);
	printf("之后：\n");
	print(a);
	print(b);
}

void reverse(double arr[],double *arry,int num){
	for(int i=num-1;i>=0;i--){
		*arry=arr[i];
		arry++;
	}
}

void print(double a[]){
	for(int j=0;j<10;j++){
		printf("%.2f ",a[j]);
	}
	printf("\n");
}