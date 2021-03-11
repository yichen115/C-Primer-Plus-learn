#include<stdio.h>
#include "pe12-2a.h"
int main(){
	int mode;
	printf("Enter 0 for metric mode,1 for US mode: ");
	scanf("%d",&mode);
	while(mode >= 0){
		setmode(mode);
		get_info();
		show_info();
		printf("Enter 0 for metric mode,1 for US mode(-1 to quit): ");
		scanf("%d",&mode);
	}
	printf("\n\n");
	return 0;
}






















