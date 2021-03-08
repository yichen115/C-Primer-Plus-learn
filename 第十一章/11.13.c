#include<stdio.h>
int main(int argc,char *argv[]){
	//argc是参数个数，argv是字符串指针数组
	int count;
	for(count = argc-1;count>0;count--){
		printf("%s ",argv[count]);
	}
	printf("\n");
	return 0;
}