#include<stdio.h>
int main(){
	double x,y;
	double lif(double x){
		return x*x*x;
	}
	printf("输入一个double类型的数:");
	scanf("%lf",&x);
	y = lif(x);
	printf("%lf\n",y);
	return 0;
}
