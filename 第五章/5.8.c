#include<stdio.h>
int main(){
	int a=1;
	int b=1;
	printf("输入第二个操作数");
	scanf("%d",&b);
	printf("输入第一个操作数");
	scanf("%d",&a);
	while(a>0 && b>0){
		printf("%d %% %d = %d\n",a,b,a%b);
		printf("输入第二个操作数");
		scanf("%d",&b);
		printf("输入第一个操作数");
		scanf("%d",&a);
	}
	return 0;
}