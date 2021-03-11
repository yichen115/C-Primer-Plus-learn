#include<stdio.h>
int critic();
int main(){
	int units = 0;
	printf("输个数?\n");
	scanf("%d",&units);
	while(units != 56){
		units = critic();
	}
	printf("牛啊!\n");
	return 0;
}

int critic(){
	int units = 0;
	printf("错了,再来\n");
	scanf("%d",&units);
	return units;
}






























