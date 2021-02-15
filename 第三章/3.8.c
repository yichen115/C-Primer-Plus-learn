#include<stdio.h>
int main(){
	float count;
	printf("请输入杯数：");
	scanf("%f",&count);
	printf("%f品脱\n",count/2);
	printf("%f盎司\n",count*8);
	printf("%f大汤勺\n",count*8*2);
	printf("%f茶勺\n",count*8*2*3);
	return 0;
}
