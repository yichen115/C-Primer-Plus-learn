#include<stdio.h>
int main(){
	char alphabet[26]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int k = 0;
	for(int i=0;i<=5;i++){
		for(int j=0;j<=i;j++){
			printf("%c",alphabet[k]);
			k++;
		}
		printf("\n");
	}
	return 0;
}