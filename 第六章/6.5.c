//    A
//   ABA
//  ABCBA
// ABCDBCA
//ABCDEDCBA
#include<stdio.h>
int main(){
	char input;
	int line;
	char a = 'A';
	printf("请输入一个大写字母:");
	scanf("%c",&input);
	line = input - a;
	for(int i=0;i<=line;i++){
		for(int j=0;j<=line-i;j++)
		{
			printf(" ");
		}
		for(int k=0;k<=i;k++)
		{
			printf("%c",a+k);
		}
		for(int m=i,x=i;m>=1;m--)
		{
			
			printf("%c",a+x-1);
			x--;
		}
		printf("\n");
	}
	return 0;
}