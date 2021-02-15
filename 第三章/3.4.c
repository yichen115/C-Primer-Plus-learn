#include<stdio.h>
int main(){
	float i;
	printf("请输入一个浮点数:");
	scanf("%f",&i);
	printf("输入的浮点数是:%f\n",i);
	printf("用指数表示:%e\n",i);
	printf("P计数法表示:%a\n",i);
	return 0;
}
