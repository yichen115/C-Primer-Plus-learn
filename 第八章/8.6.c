#include <stdio.h>
int main(){
	char out;
	char get_first(void);
	printf("请输入一串字符，我会返回给你第一个非空白字符");
	out = get_first();
	putchar(out);
	printf("\n");
	return 0;
}
char get_first(void)
{
    int ch,ret;
    while ((ch=getchar()) != '\n'){
		if(ch!=' '){
			ret=ch;
			break;
		}else{
			continue;
		}
	}
    return ret;
}