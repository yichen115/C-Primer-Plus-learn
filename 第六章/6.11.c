#include<stdio.h>
int main(){
	int c[8];
	printf("请输入8个整数：");
	for(int i=0;i<8;i++){
		scanf("%d",&c[i]);
	}
	for(int i=7;i>=0;i--){
		printf("%d",c[i]);
	}
	printf("\n");
	return 0;
}