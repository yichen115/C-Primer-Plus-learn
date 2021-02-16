#include<stdio.h>
#include<string.h>
int main(){
	int f_len;
	int l_len;
	char f_name[20];
	char l_name[20];
	scanf("%s %s",f_name,l_name);
	f_len = strlen(f_name);
	l_len = strlen(l_name);
	printf("\"%20s %20s\"\n",f_name,l_name);
	printf("\"%-20s %-20s\"\n",f_name,l_name);
	printf("\"%*s %*s\"\n",f_len+3,f_name,l_len+3,l_name);
	return 0;
}
