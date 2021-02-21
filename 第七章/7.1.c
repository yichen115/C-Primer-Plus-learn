#include<stdio.h>
int main(){
	char input;
	int kg=0;
	int hh=0;
	int other=0;
	do{
		scanf("%c",&input);
		if(input==' '){
			kg++;
		}
		else if(input=='\n'){
			hh++;
		}
		else{
			other++;
		}
	}
	while(input != '#');
	printf("刚才输入的字符中，空格:%d，换行：%d，其他:%d\n",kg,hh,other-1);
	//other会有一个#，删掉
	return 0;
}