#include<stdio.h>
int main(){
	float tall;
	char name[20];
	printf("输入姓名与身高");
	scanf("%s %f",name,&tall);
	printf("%s，you are %f feet tall\n",name,tall);
	return 0;
}
