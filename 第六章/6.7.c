#include<stdio.h>
#include<string.h>
int main(){
	char c[20];
	printf("请键入一个单词：");
	scanf("%s",c);
	for(int i=strlen(c);i>=0;i--){
		printf("%c",c[i]);
	}
	printf("\n");
	return 0;
}