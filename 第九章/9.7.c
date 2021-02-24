#include<stdio.h>
#include<ctype.h>
void print();
int main(){
	print();
	printf("\n");
	return 0;
}

void print(){
	char ch;
	while((ch = getchar())!=EOF){
		if(isalpha(ch)){
			if(ch>=65&&ch<=90)
				printf("%c - %d\n",ch,ch-64);
			if(ch>=97&&ch<=122)
				printf("%c - %d\n",ch,ch-96);
		}
	}
}