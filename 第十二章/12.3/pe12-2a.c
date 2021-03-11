#include<stdio.h>
#include "pe12-2a.h"

void setmode(int *md,int mode)
{
	*md = mode;
}

void get_info(int *md,int *jl,float *rl)
{
	if((*md) == 0){
		printf("输入行驶的距离（以公里为单位）:");
		scanf("%d",jl);
		printf("输入以升为单位消耗的燃料：");
		scanf("%f",rl);
		printf("\n");
	}
	else if((*md) == 1){
		printf("输入行驶的距离（以英里为单位）:");
		scanf("%d",jl);
		printf("输入以加仑计的燃料消耗:");
		scanf("%f",rl);
		printf("\n");
	}
	else {
		printf("没这个选项，默认选（1）\n");
		printf("输入行驶的距离（以英里为单位）:");
		scanf("%d",jl);
		printf("输入以加仑计的燃料消耗:");
		scanf("%f",rl);
		printf("\n");
	}
}

void show_info(int *md,int *jl,float *rl)
{
	if((*md) == 0)
	{
		printf("每100千米消耗%f升汽油\n",(*rl)/(*jl)*100);
	}
	else if((*md) == 1)
	{
		printf("油耗为每加仑%f英里\n",(*jl)/(*rl));
	}
	else
	{
		printf("油耗为每加仑%f英里\n",(*jl)/(*rl));
	}
	printf("\n");
}

















