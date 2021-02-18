#include<stdio.h>
int main(){
	float end = 100;
	int year = 1;
	while(end>0){
		end += end*0.08;
		end = end-10;
		year++;
	}
	printf("%d年取完钱\n",year);
	return 0;
}