#include<stdio.h>
int main(){
	int count=0;
	char input;
	printf("请输入一串以#结尾的字符：");
	while((input = getchar())!='#'){
		switch(input)
		{
			case '!':
				putchar('!');
				putchar('!');
				count++;
				break;
			case '.':
				putchar('!');
				count++;
				break;
			default:
				putchar(input);
		}
	}
	printf("总共替换了%d次\n",count);
	return 0;
}