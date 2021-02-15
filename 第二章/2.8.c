#include<stdio.h>
int main(){
	printf("starting now;\n");
	void two(){
		printf("two\n");
	}
	void one_three(){
		printf("one\n");
		two();
		printf("three\n");
	}
	one_three();
	printf("done!\n");
	return 0;
}
