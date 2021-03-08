#include<stdio.h>
#include <string.h>
#include <ctype.h>
char * s_gets(char * st, int n);
void output(char *str,char choice);

int main(int argc,char *argv[]){
	char choice;
	char text[50];
	s_gets(text,50);
	if(argc>1){
		if(argv[1][1]=='p') {
			choice = 'p';
			output(text,choice);
		}
		else if(argv[1][1]=='u') {
			choice = 'u';
			output(text,choice);
		}
		else if(argv[1][1]=='l') {
			choice = 'l';
			output(text,choice);
		}
	}
	else{
		printf("[!]请使用 -p:原样打印 -u:转为大写 -l:转为小写\n");
		choice = 'p';
		output(text,choice);
	}
	printf("\n");
	return 0;
}


void output(char *str,char choice){
	switch(choice){
		case 'p':
			while(*str!='\0'){
				putchar(*str);
				str++;
			}
			break;
		case 'u':
			while(*str!='\0'){
				putchar(toupper(*str));
				str++;
			}
			break;
		case 'l':
			while(*str!='\0'){
				putchar(tolower(*str));
				str++;
			}
			break;
	}
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