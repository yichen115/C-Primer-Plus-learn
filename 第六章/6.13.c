#include<stdio.h>
#include<math.h>
int main(){
	int x=0;
	int a[8]={1,2,3,4,5,6,7,8};
	for(int i=0;i<8;i++){
		a[i]=pow(2,i);
	}
	do{
		printf("%d ",a[x]);
		x++;
	}
	while(x<8);
	printf("\n");
	return 0;
}