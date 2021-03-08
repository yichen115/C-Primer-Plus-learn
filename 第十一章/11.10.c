#include<stdio.h>
char * s_gets(char * st, int n);
void qspace(char *a);
char text[50];
int main(){
	printf("请输入字符串:(直接回车退出)\n");
	while(*s_gets(text, 50) != '\n'){
		qspace(text);
		printf("请输入字符串:(直接回车退出)\n");
	}
	return 0;
}

void qspace(char *a){
	char *p=a;
	while(*a){
		if(*a==' ')
			for(int i=0;a[i]!='\0';i++)
				a[i]=a[i+1];
		else
			a++;
	}
	puts(p);
}


char * s_gets(char * st, int n)
{	//把字符串结尾的换行'\n'替换为'\0'
	int i = 0;
	if (fgets(st, n, stdin)!=NULL && st[0]!='\n')
	{//当输入不为NULL且第一个不为'\n'的时候才能继续
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
















