#include<stdio.h>
int main(){
	const float jl_s = 3.785;
	const float yl_km = 1.609;
	float lic,km;
	float hyou,sheng;
	printf("请输入里程与耗油量:");
	scanf("%f %f",&lic,&hyou);
	printf("每加仑行驶%.1f英里\n",lic/hyou);
	sheng = hyou * jl_s;
	km = lic * yl_km;
	printf("%f升/100公里\n",sheng/km*100);
	return 0;	
}
