#include<stdio.h>
int main(){
	int count=0;
	char input;
	printf("请输入一串以#结尾的字符：");
	while((input = getchar())!='#'){
		if(input=='!'){
			putchar('!');
			putchar('!');
			count++;
		}
		else if(input=='.'){
			putchar('!');
			count++;
		}
		else
			putchar(input);
	}
	printf("\n总共替换了%d次\n",count);
	return 0;
}