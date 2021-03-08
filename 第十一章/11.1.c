#include<stdio.h>
void input(int n,char a[n]);
int main(){
	char x[10]={0};
	for(int i;i<10;i++){
		printf("%c",x[i]);
	}
	
	input(10,x);
	
	for(int i;i<10;i++){
		printf("%c",x[i]);
	}
	
	printf("\n");
	return 0;
}

void input(int n,char a[n]){
	for(int i=0;i<n;i++){
		a[i]=getchar();
	}
}