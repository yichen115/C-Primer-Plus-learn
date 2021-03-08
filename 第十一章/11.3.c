#include<stdio.h>
#include<ctype.h>
void get_input(char *a);
int main(){
	char test[10];
	get_input(test);
	for(int i=0;i<10;i++){
		printf("%c",test[i]);
	}
	printf("\n");
}

void get_input(char *a){
	char temp;
	while(isspace(temp = getchar()));
	*a++=temp;//接收第一个非空白
	while(!isspace(temp = getchar())){
		*a++=temp;
	}
}