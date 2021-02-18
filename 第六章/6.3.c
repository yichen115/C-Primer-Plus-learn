#include<stdio.h>
int main(){
	char alphabet[26]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	for(int i=5;i>=0;i--){
		for(int j=5;j>=i;j--){
			printf("%c",alphabet[j]);
		}
		printf("\n");
	}
	return 0;
}