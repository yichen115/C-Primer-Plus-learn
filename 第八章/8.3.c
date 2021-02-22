#include<stdio.h>
#include<ctype.h>
int main(){
	char input;
	int lower=0;
	int upper=0;
	while((input=getchar())!=EOF){
		if(islower(input)) lower++;
		if(isupper(input)) upper++;
	}
	printf("大写字母%d个，小写字母%d个\n",upper,lower);
	return 0;
}