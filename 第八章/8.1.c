#include<stdio.h>
//ctrl+d输入EOF
int main(){
	int ch;
	int ct =0;
	while((ch=getchar())!=EOF)
		ct++;
	printf("\n%d characters read\n",ct);
	return 0;
}