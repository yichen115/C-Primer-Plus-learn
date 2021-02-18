#include<stdio.h>
#include<string.h>
int main(){
	char text[256];
	int i=0;
	printf("请输入一串字符串：");
	scanf("%c",&text[i]);
	while(text[i]!='\n'){
		i++;
		scanf("%c",&text[i]);
	}
	for(i;i>=0;i--){
		printf("%c",text[i-1]);
	}
	printf("\n");
	return 0;
}