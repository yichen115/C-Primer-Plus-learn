#include<stdio.h>
#include <stdlib.h>
//atoi字符串转为整形
//itoa整数转为字符串
//atof字符串转为浮点型
int main(int argc,char *argv[]){
	//argc是参数个数，argv是字符串指针数组
	int count;
	double di;
	double end=1;
	int zhi;
	di = atof(argv[1]);
	zhi = atoi(argv[2]);
	printf("底数是%f，指数是%d\n",di,zhi);
	if(zhi>0){
		for(int i=0;i<zhi;i++){
			end *= di;
		}
	}
	if(zhi<0){
		for(int i=0;i>zhi;i--){
		end *= (1/di);
	}
	}
	printf("结果为%g\n",end);
	return 0;
}