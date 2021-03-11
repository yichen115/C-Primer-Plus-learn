#include<stdio.h>
#include "pe12-2a.h"
static int moshi;
static int juli;
static float ranl;

void setmode(int mode)
{
	moshi = mode;
}

void get_info()
{
	if(moshi == 0){
		printf("输入行驶的距离（以公里为单位）:");
		scanf("%d",&juli);
		printf("输入以升为单位消耗的燃料：");
		scanf("%f",&ranl);
		printf("\n");
	}
	else if(moshi == 1){
		printf("输入行驶的距离（以英里为单位）:");
		scanf("%d",&juli);
		printf("输入以加仑计的燃料消耗:");
		scanf("%f",&ranl);
		printf("\n");
	}
	else {
		printf("没这个选项，默认选（1）\n");
		printf("输入行驶的距离（以英里为单位）:");
		scanf("%d",&juli);
		printf("输入以加仑计的燃料消耗:");
		scanf("%f",&ranl);
		printf("\n");
	}
}

void show_info()
{
	if(moshi == 0)
	{
		printf("每100千米消耗%f升汽油\n",ranl/juli*100);
	}
	else if(moshi == 1)
	{
		printf("油耗为每加仑%f英里\n",juli/ranl);
	}
	else
	{
		printf("油耗为每加仑%f英里\n",juli/ranl);
	}
	printf("\n");
}

















