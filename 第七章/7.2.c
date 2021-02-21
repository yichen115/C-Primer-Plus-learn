#include<stdio.h>
int main(){
	char input;
	int count=0;
	while((input = getchar()) != '#'){
		printf("%c - %3d  ",input,input);
		count++;
		if(count%8==0){
			printf("\n");
		}
	}
	return 0;
}