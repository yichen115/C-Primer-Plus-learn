#include<stdio.h>
#include <stdlib.h>
#include "pe12-2a.h"
int main(){
	int mode;
	printf("Enter 0 for metric mode,1 for US mode: ");
	scanf("%d",&mode);
	while(mode >= 0){
		int *md = (int *)malloc(sizeof(int));
		int *jl = (int *)malloc(sizeof(int));
		float *rl = (float *)malloc(sizeof(float));
		setmode(md,mode);
		get_info(md,jl,rl);
		show_info(md,jl,rl);
		printf("Enter 0 for metric mode,1 for US mode(-1 to quit): ");
		scanf("%d",&mode);
	}
	printf("\n\n");
	return 0;
}






















