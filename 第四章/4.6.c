#include<stdio.h>
#include<string.h>
int main(){
	char f_name[10];
	char l_name[10];
	int f_len,l_len;
	printf("请输入姓名:");
	scanf("%s %s",f_name,l_name);
	f_len = strlen(f_name);
	l_len = strlen(l_name);
	printf("%s %s\n",f_name,l_name);
	printf("%*d %*d\n",f_len,f_len,l_len,l_len);
	printf("%s %s\n",f_name,l_name);
	printf("%-*d %-*d\n",f_len,f_len,l_len,l_len);
	return 0;
}
