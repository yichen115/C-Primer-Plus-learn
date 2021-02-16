#include<stdio.h>
int main(){
	int day = 1;
	while(day > 0){
		printf("请输入天数:");
		scanf("%d",&day);
		printf("%d days are %d weeks,%d days\n",day,day/7,day%7);
	}
	return 0;
}
