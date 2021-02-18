#include<stdio.h>
int main(){
	int up,down;
	printf("请输入一个整数范围:");
	scanf("%d %d",&down,&up);
	while(up >= down){
		int sum = 0;
		for(int i=down;i<=up;i++)
		{
			sum = sum + i*i;
		}
		printf("%d到%d的平方和是:%d\n",down,up,sum);
		printf("请输入一个整数范围:");
		scanf("%d %d",&down,&up);
	}
	return 0;
}