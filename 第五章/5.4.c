#include<stdio.h>
int main(){
	float tall = 1.0;
	while(tall > 0){
		printf("Enter a height in centimeters:");
		scanf("%f",&tall);
		printf("%f 厘米 = %f 英寸\n",tall,tall*0.393);
	}
	return 0;
}
