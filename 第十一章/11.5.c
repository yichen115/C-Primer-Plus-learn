#include<stdio.h>
#include<ctype.h>
#include<string.h>
char *find_char(char *a,char c);
int main(){
	char test[50];
	char *finded;
	char ch;
	printf("你输入的内容从 %p 开始\n",test);
	printf("请输入字符串:(#退出)\n");
	fgets(test,50,stdin);
	while(*test!='#'){
		printf("请输入想查找的字符\n");
		scanf("%c",&ch);
		finded = find_char(test,ch);
		if(finded != NULL){
			printf("要找的字符在 %p 是第 %d 个",finded,finded-test+1);
		}
		else{
			printf("404...\n");
		}
		printf("\n");
		printf("请输入字符串:(#退出)\n");
		getchar();
		fgets(test,50,stdin);
	}
	printf("\n");
}

char *find_char(char *a,char c){
	while(*a!='\0'){
		if(*a==c){
			return a;
		}
		a++;
	}
	return NULL;
}