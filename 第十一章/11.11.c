#include<stdio.h>
#include<string.h>
#include<ctype.h>
char *s_gets(char * st, int n);
void print_source(char *str[]);
void print_ascii(char *str[]);
void print_len(char *str[]);
void print_firstlen(char *str[]);
int firstlen(char *str);
char get_choice();
char choice;

char text[10][50];
char *ptr[10];

int main(){
	int i=0;
	printf("请输入10个字符串\n");
	
	while(i < 10 && s_gets(text[i],50)!=NULL){
		ptr[i]=text[i];
		i++;
	}
	while((choice = get_choice())!='q'){
		switch(choice){
			case 'a':
				print_source(ptr);
				break;
			case 'b':
				print_ascii(ptr);
				break;
			case 'c':
				print_len(ptr);
				break;
			case 'd':
				print_firstlen(ptr);
				break;
		}
	}
	printf("程序退出...\n");
	return 0;
}

char get_choice(){
	char ch;
	printf("\n##########菜单##########\n");
	printf("a.打印原字符串          b.打印ascii码形式\n");
	printf("c.按照长度排序打印      d.按照第一个单词长度排序\n");
	printf("q.退出\n");
	printf("请输入选项：");
	ch = getchar();
	while(getchar() != '\n')
		continue;			//通过这个来规避回车的影响
	return ch;
}

void print_source(char *str[]){
	for(int i=0;i<10;i++){
		puts(str[i]);
	}
}

void print_ascii(char *str[]){
	char *temp;
	for(int i=0;i<9;i++){
		for(int j=i+1;j<10;j++)
		if(strcmp(str[i],str[j])>0){
			temp = str[j];
			str[j] = str[i];
			str[i]=temp;
		}
	}
	for(int i=0;i<10;i++){
		puts(str[i]);
	}
}

void print_len(char *str[]){
	char *temp;
	for(int i=0;i<9;i++){
		for(int j=i+1;j<10;j++)
		if(strlen(str[i])>strlen(str[j])){
			temp = str[j];
			str[j] = str[i];
			str[i]=temp;
		}
	}
	for(int i=0;i<10;i++){
		puts(str[i]);
	}
}

void print_firstlen(char *str[]){
	char *temp;
	for(int i=0;i<9;i++){
		for(int j=i+1;j<10;j++)
		if(firstlen(str[i])>firstlen(str[j])){
			temp = str[j];
			str[j] = str[i];
			str[i]=temp;
		}
	}
	for(int i=0;i<10;i++){
		puts(str[i]);
	}
}

int firstlen(char *str){
	int count = 0;
	int i=0;
	while(!isalpha(str[i]))
		i++;
	while(isalpha(str[i])){
		i++;
		count++;
	}
	return count;
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
















