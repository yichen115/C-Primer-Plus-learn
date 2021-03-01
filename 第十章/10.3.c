#include<stdio.h>
int max(int arr[],int num);
int a[10]={1,4,2,6,9,3,5,0,12,4};
int main(){
	int max_s=0;
	max_s=max(a,10);
	printf("最大的数是%d\n",max_s);
	return 0;
}

int max(int arr[],int num){
	int temp=arr[0];
	for(int i=0;i<num;i++){
		if(temp<a[i]){
			temp=a[i];
		}
	}
	return temp;
}