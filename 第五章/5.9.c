#include<stdio.h>
int main(){
	double wen;
	double Temperatures(double x){
		const double kai = 273.16;
		double a;
		double b;
		a = 5.0/9.0*(x-32.0);
		b = a + kai;
		printf("华氏温度%.2f,摄氏温度%.2f,开氏温度%.2f\n",x,a,b);
	}
	
	printf("请输入温度：");
	while(scanf("%lf",&wen) == 1 ){
		Temperatures(wen);
		printf("请输入温度：");
	}
	return 0;
}