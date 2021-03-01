#include<stdio.h>
int max(double arr[],int num);
double a[10]={13.5,2.4,33.2,4.36,92.1,9.3,55.1,100.2,1.2,4.5};
int main(){
	int max_s=0;
	max_s=max(a,10);
	printf("最大的数下标是%d\n",max_s);
	return 0;
}

int max(double arr[],int num){
	double temp=arr[0];
	int j=0;
	for(int i=0;i<num;i++){
		if(temp<a[i]){
			temp=a[i];
			j=i;
		}
	}
	return j;
}