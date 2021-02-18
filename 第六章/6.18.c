#include<stdio.h>
int main(){
	int friend = 5;
	int week=1;
	while(friend<150){
		friend = friend - week;
		friend = friend * 2;
		printf("week=%2d,friend=%4d\n",week,friend);
		week++;
	}
	printf("第%d周之后超过了邓巴数\n",week-1);
	return 0;
}