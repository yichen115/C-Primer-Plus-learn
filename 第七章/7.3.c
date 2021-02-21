#include<stdio.h>
int main(){
	int ou_count=0;
	int ji_count=0;
	int ou_sum=0;
	int ji_sum=0;
	int input;
	printf("输入以0结尾的一串数");
	while(scanf("%d",&input)==1){
		if(input==0){
			break;
		}
		if(input%2==0){//偶数
			ou_sum = ou_sum + input;
			ou_count++;
		}
		if(input%2!=0){//奇数
			ji_sum = ji_sum + input;
			ji_count++;
		}
	}
	printf("偶数个数：%d偶数平均数：%d\n",ou_count,ou_sum/ou_count);
	printf("奇数个数：%d奇数平均数：%d\n",ji_count,ji_sum/ji_count);
	return 0;
}