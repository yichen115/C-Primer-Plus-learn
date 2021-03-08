#include<stdio.h>
#include<string.h>
#include<ctype.h>
char *s_gets(char * st, int n);
char text[50];
int word_count;
int big_count;
int small_count;
int bd_count;
int num_count;

int main(){
	printf("输入吧:");
	int i=0;
	while((text[i] = getchar())!=EOF){
		if(islower(text[i])) small_count++;
		if(ispunct(text[i])) bd_count++;
		if(isupper(text[i])) big_count++;
		if(isdigit(text[i])) num_count++;
		if(isalpha(text[i]) && isspace(text[i-1]) || isalpha(text[i]) && ispunct(text[i-1])) word_count++;
		i++;
	}
	printf("有%d个单词，有%d个大写字母，有%d个小写字母，有%d个标点，有%d个数字\n",word_count+1,big_count,small_count,bd_count,num_count);
	printf("程序退出...\n");
	return 0;
}

char * s_gets(char * st, int n)
{	//把字符串结尾的换行'\n'替换为'\0'
	int i = 0;
	if (fgets(st, n, stdin)!=NULL)
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
















