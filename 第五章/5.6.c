#include<stdio.h>
int main(){
	int count,sum,day;
	count = 0;
	sum = 0;
	printf("请输入天数:");
	scanf("%d",&day);
	while(count++ < day)
	sum = sum+count*count;
	printf("sum = %d \n",sum);
	return 0;
}
