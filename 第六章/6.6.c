#include<stdio.h>
int main(){
	int a,b;
	printf("输入上下限：");
	scanf("%d %d",&a,&b);
	for(int i = a;i<=b;i++){
		printf("数：%3d,平方：%3d,立方：%3d\n",i,i*i,i*i*i);
	}
	printf("\n");
	return 0;
}