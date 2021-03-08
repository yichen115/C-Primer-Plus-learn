#include<stdio.h>
#include<string.h>
char * s_gets(char * st, int n);
char *reverse(char *a);
char text[50];

int main(){
	printf("请输入字符串:(#退出)\n");
	s_gets(text,50);
	if(*text=='#')
		return 0;
	while(*text!='#'){
		reverse(text);
		puts(text+1);
		printf("请输入字符串:(#退出)\n");
		s_gets(text,50);
	}
	return 0;
}

char *reverse(char *a){
	int i=0;
	size_t length = strlen(a);
	char temp[length];

	for (i = 0; i <= length; i++)
	{
		temp[i] = a[length - i];//反向存储在temp里面
	}
	for (i = 0; i <= length; i++)
	{
		a[i] = temp[i];
	}
	//a[length] = '\0';
	return a;
}

char * s_gets(char * st, int n)
{	//把字符串结尾的换行'\n'替换为'\0'
	int i = 0;
	if (fgets(st, n, stdin))
	{
		while (st[i] != '\n' && st[i] != '\0')
			i++;
		if (st[i] == '\n')
			st[i] = '\0';
		else
			while (getchar() != '\n')
				continue;
	}
	return st;
}


















