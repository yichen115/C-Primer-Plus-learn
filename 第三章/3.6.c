#include<stdio.h>
int main(){
	int count;
	printf("输入夸脱数");
	scanf("%d",&count);
	printf("水分子数:%f\n",count*950/3.0e-23);
	printf("对比:%f\n",(950/3.0e-23)*count);
	return 0;

}
