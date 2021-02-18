#include<stdio.h>
int main(){
	float a,b;
	while(scanf("%f %f",&a,&b)==2){
		printf("两数之差除以两数乘积:%f\n",(a-b)/(a*b));
	}
	return 0;
}