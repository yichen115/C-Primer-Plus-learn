#include<stdio.h>
#define jiaban 1.5
#define shui_300 0.15
#define shui_150 0.2
#define shui_end 0.25
#define xuan1 8.75
#define xuan2 9.33
#define xuan3 10.00
#define xuan4 11.20
//????这题毫无意义
int main(){
	char input;
	float gz=0;
	int hour;
	float gz_hour=10;
	printf("**********************************************\n");
	printf("请选择时薪：\n");
	printf("a) $8.75/hr\tb) $9.33/hr\n");
	printf("c) $10.00/hr\td) $11.20/hr\n");
	printf("q) quit\n");
	printf("**********************************************\n");
	input = getchar();
	while(input!='q'){
		if(input=='a'){
			gz_hour = xuan1;
		}
		else if(input=='b'){
			gz_hour = xuan2;
		}
		else if(input=='c'){
			gz_hour = xuan3;
		}
		else if(input=='d'){
			gz_hour = xuan4;
		}
		else{
			printf("请正确输入\n");
		}
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
		printf("工资一共：%f\n\n\n",gz);
		printf("**********************************************\n");
		printf("请选择时薪：\n");
		printf("a) $8.75/hr\tb) $9.33/hr\n");
		printf("c) $10.00/hr\td) $11.20/hr\n");
		printf("q) quit\n");
		printf("**********************************************\n");
		getchar();//把回车给读进来
		input = getchar();
	}
	return 0;
}