#include<stdio.h>
#include<ctype.h>
#include<string.h>
int is_with(char *a,char c);
int main(){
	char test[50];
	int finded;
	char ch;
	printf("你输入的内容从 %p 开始\n",test);
	printf("请输入字符串:(#退出)\n");
	fgets(test,50,stdin);
	while(*test!='#'){
		printf("请输入想查找的字符\n");
		scanf("%c",&ch);
		finded = is_with(test,ch);
		if(finded != 0){
			printf("要找的字符在字符串中");
		}
		else{
			printf("404...不在字符串中\n");
		}
		printf("\n");
		printf("请输入字符串:(#退出)\n");
		getchar();
		fgets(test,50,stdin);
	}
	printf("\n");
}

int is_with(char *a,char c){
	while(*a!='\0'){
		if(*a==c){
			return 1;
		}
		a++;
	}
	return 0;
}