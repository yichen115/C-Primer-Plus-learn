#include<stdio.h>
#define gz_hour 10
//离谱，看的pdf上是1000,原来少了个小数点10.00
#define jiaban 1.5
#define shui_300 0.15
#define shui_150 0.2
#define shui_end 0.25

int main(){
	float gz=0;
	int hour;
	printf("请输入一周工作小时数：");
	scanf("%d",&hour);
	if(hour<=40)
	{
		gz = hour * gz_hour;
	}
	else{
		gz = 40 * gz_hour + jiaban*(hour-40)*gz_hour;
	}
	//计算税收
	if(gz<=300){
		gz = gz - gz*shui_300;
	}
	else if(gz<=450){
		gz = gz - 300*shui_300 - (gz-300)*shui_150;
	}
	else{
		gz = gz - 300*shui_300 - 150*shui_150 - (gz-450)*shui_end;
	}

	printf("工资一共：%f\n",gz);
	return 0;
}