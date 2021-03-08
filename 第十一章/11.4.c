#include<stdio.h>
#include<ctype.h>
void get_input(char *a,int n);
int main(){
	char test[10];
	get_input(test,10);
	for(int i=0;i<10;i++){
		printf("%c",test[i]);
	}
	printf("\n");
}

void get_input(char *a,int n){
	char temp;
	while(isspace(temp = getchar()));
	*a++=temp;//接收第一个非空白
	n--;
	while(!isspace(temp = getchar())&&n>0){
		*a++=temp;
		n--;
	}
}