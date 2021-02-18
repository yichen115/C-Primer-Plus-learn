#include<stdio.h>
int main(){
	float a1[8];
	float a2[8]={0};
	printf("请输入8个数:");
	for(int i=0;i<8;i++){
		scanf("%f",&a1[i]);
	}
	for(int i=0;i<8;i++){
		for(int j=0;j<i;j++){
			a2[i] += a1[j];
		}
	}
	for(int i=0;i<8;i++){
		printf("%f\n",a2[i]);
	}
	return 0;
}