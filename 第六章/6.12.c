#include<stdio.h>
#include<math.h>
int main(){
	float count;
	float sum1,sum2;
	float i;
	_Bool a;
	printf("请输入次数:");
	a = scanf("%f",&count);
	while((count > 0) && a){
		for(i=1.0,sum1=0,sum2=0;i<=count;i++){
			sum1 += 1.0f/i;
			sum2 +=(1.0f/i) * (float)pow(-1.0,i+1);
		}
		printf("sum_1= %f\nsum_2= %f\n", sum1, sum2);
		printf("请输入次数:");
		scanf("%f",&count);
	}
	return 0;
}