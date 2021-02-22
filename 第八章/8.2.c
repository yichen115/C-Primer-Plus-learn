#include<stdio.h>
int main(){
	char ch;
	int count=0;
	while((ch=getchar())!=EOF){
		if(ch == ' ') printf("' '-%d ", ch);
		else if(ch == '\t') printf("\\t-%d ", ch);
		else if(ch == '\n') printf("\\n-%d ", ch);
		else if(ch <32) printf("^%c-%d ", ch+64, ch);
		else printf("%c-%d ", ch, ch);
	count++;
	if(count%10==0){
		printf("\n");
	}
	}
	return 0;
}