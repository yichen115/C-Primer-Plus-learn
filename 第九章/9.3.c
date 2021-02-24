#include<stdio.h>
char ch='a';
int i=3,j=4;
void print(char ch,int i,int j);
int main(){
	print(ch,i,j);
	return 0;
}

void print(char ch,int i,int j){
	for(int x=0;x<i;x++){
		for(int y=0;y<j;y++){
			printf("%c",ch);
		}
		printf("\n");
	}
}