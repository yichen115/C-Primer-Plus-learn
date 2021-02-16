#include<stdio.h>
int main(){
	const int a = 60;
	int b = 1;
	while(b > 0){
		printf("请输入分钟:");
		scanf("%d",&b);
		printf("%d小时",b/a);
		printf("%d分钟\n",b%a);
	}
	return 0;
}
