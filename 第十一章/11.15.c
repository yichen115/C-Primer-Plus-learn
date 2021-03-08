#include<stdio.h>
#include<ctype.h>
int atoi(char *str);
int main(){
	char text[50];
	int i=0;
	int num=0;
	printf("请输入字符串,我将转为数字：");
	gets(text);
	num=atoi(text);
	printf("%d",num);
	printf("\n");
	return 0;
}
//本来想法是把转过来的存在数组里面然后返回，结果发现不知道咋返回数组的
int atoi(char *str){
	int i=0;
	while(*str!='\0'){
		if(isdigit(*str)){
			i=i*10;
			i+=(*str)-48;
			str++;
		}
		else{
			printf("请输入纯数字");
			return 0;
		}
	}
	return i;
}