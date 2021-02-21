//编写一个程序，只接受正整数输入，然后显示所有小于或等于该数的素数
//素数，除了1和它本身之外，不能被整除，所以只要2到i-1取余不等于0就是了
#include<stdio.h>
int main(){
	int input;
	int count=0;
	int sign;
	int is_su(int x){
		int j;
		for(j=2;j<=x-1;j++){
			if(x%j==0){
				return 0;
			}
		}
		return 1;
	}
	
	printf("请输入一个正整数");
	scanf("%d",&input);
	for(int i=2;i<=input;i++){
		if(is_su(i)){
			printf("%d\n",i);
			count++;
		}
	}
	printf("一共%d个素数\n",count);
	return 0;
}