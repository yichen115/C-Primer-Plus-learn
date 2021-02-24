#include<stdio.h>
void chline(char ch,int i,int j);

int main(){
	char ch='y';
	chline(ch,3,4);
	return 0;
}

void chline(char ch,int i,int j){
	for(int x=0;x<i;x++){
		for(int y=0;y<j;y++){
			printf("%c",ch);
		}
		printf("\n");
	}
}