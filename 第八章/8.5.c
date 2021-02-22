/* guess.c -- 一个拖沓且错误的猜数字程序 */ 
#include <stdio.h>
int main(void) {
	int hight=100;
	int low=1;
	int guess=(low+hight)/2;
	char c;
	printf("1-100以内猜数：%d? 大了(d) 小了(x) 猜对了(y)\n", guess);
	while ((c=getchar()) != 'y'){
		if(c=='d'){
			hight = guess;
			guess = (low+hight)/2;
			printf("1-100以内猜数：%d? \"y\"表示是,\"n\"表示不是\n", guess);
		}
		else if(c=='x'){
			low = guess;
			guess = (low+hight)/2;
			printf("1-100以内猜数：%d? \"y\"表示是,\"n\"表示不是\n", guess);
		}
	}
	printf("啊哈哈哈哈\n");
	return 0;
}