#include<stdio.h>
int main(){
	int a = 2147483647;
	float b = 3.4E38*100.0f;
	float c = (3.4E38) / (100.0E100);
	printf("%d,%d,%d\n",a,a+1,a+2);
	printf("%e\n",b);
	printf("%e\n",c);
	return 0;
}
