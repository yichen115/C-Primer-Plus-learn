#include<stdio.h>
double max(double arr[],int num);
double min(double arr[],int num);
double a[10]={13.5,2.4,33.2,4.36,92.1,9.3,55.1,100.2,1.2,4.5};
int main(){
	double max_s=0;
	double min_s=0;
	max_s=max(a,10);
	min_s=min(a,10);
	printf("最大%f与最小%f之差为：%f\n",max_s,min_s,max_s-min_s);
	return 0;
}

double max(double arr[],int num){
	double temp=arr[0];
	for(int i=0;i<num;i++){
		if(temp<a[i]){
			temp=a[i];
		}
	}
	return temp;
}

double min(double arr[],int num){
	double temp=arr[0];
	for(int i=0;i<num;i++){
		if(temp>a[i]){
			temp=a[i];
		}
	}
	return temp;
}