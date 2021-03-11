#include<stdio.h>
int cyclic();
int i=0;
int count = 23;
int main(){
	while(count != 0){
		cyclic();
		count--;
	}
	printf("牛啊!循环%d次\n",i);
	return 0;
}

int cyclic(){
	i++;
}






























