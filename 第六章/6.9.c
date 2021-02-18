#include<stdio.h>
int main(){
	float a,b;
	float shu(double x,double y){
		return (a-b)/(a*b);
	}
	while(scanf("%f %f",&a,&b)==2){
		float x;
		x = shu(a,b);
		printf("两数之差除以两数乘积:%f\n",x);
	}

	return 0;
}