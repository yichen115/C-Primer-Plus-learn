#include<stdio.h>
#include<ctype.h>
#include<string.h>
char * string_in(char * s1, char * s2);
char *string_in(char *a,char *b);
char * s_gets(char * st, int n);
int main(){
	char x[50];
	char y[50];
	char *find;
	printf("x在:%p处\n",x);
	printf("请输入字符串:(#退出)\n");
	s_gets(x,50);
	if(*x=='#')
		return 0;
	printf("请输入子字符串:\n");
	s_gets(y,50);
	while(*x!='#'){
		find = string_in(x,y);
		if(find != NULL){
			printf("找到在:%p处\n",find);
		}
		else{
			printf("404\n");
		}
		printf("请输入字符串:(#退出)\n");
		s_gets(x,50);
		if(*x=='#')
			return 0;
		printf("请输入子字符串:\n");
		s_gets(y,50);
	}
	printf("\n");
	return 0;
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

char *string_in(char *a,char *b){
	int i=0;
	while(*a){
		while(*(a+i) == *(b+i)){
			i++;
			if(!(*(b+i)))
				return a;
		}
		a++;
	}
	return NULL;
}



















