#include<stdio.h>
#include<ctype.h>
#include<string.h>
char *mystrncpy(char *a,char *b,int n);
int main(){
	char x[50];
	char y[50];
	printf("请输入字符串:(#退出)\n");
	fgets(x,50,stdin);
	while(*x!='#'){
		mystrncpy(x,y,50);
		puts(y);
		printf("请输入字符串:(#退出)\n");
		fgets(x,50,stdin);
	}
	printf("\n");
}

char *mystrncpy(char *a,char *b,int n){
	while(n!=0){
		*b++ = *a++;
		n--;
	}
	return 0;
}