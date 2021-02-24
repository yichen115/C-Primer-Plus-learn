#include<stdio.h>
double min(double x,double y);
int main(){
	double i,j;
	double k;
	printf("输入两个数值，我会显示较小的:");
	scanf("%lf %lf",&i,&j);
	k = min(i,j);
	printf("%f是小的\n",k);
	return 0;
}
	double min(double x,double y){
		if(x<=y){
			return x;
		}else return y;
	}