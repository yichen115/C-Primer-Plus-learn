#include<stdio.h>
int main(){
	int count=0;
	char in1,in2;
	printf("请输入一串以#结尾的字符：");
	in1=getchar();
	while(in1!='#' && (in2=getchar())!='#'){
		if(in1=='e'&&in2=='i'){
			count++;
		}
		in1=in2;
	}
	printf("总共出现了%d次\n",count);
	return 0;
}