#include<stdio.h>
#include<ctype.h>
int main(){
	char input,temp;
	float count;
	float charcount=0.0;
	float wordcount=0.0;
	while((input = getchar())!=EOF){
		if(isalpha(input)){
			temp = input;//如果是字母的话放在temp里，然后char+1
			charcount++;
		}else if(input == ' '&&isalpha(temp)){
			temp =' ';//如果输入的是' '，且上一个是字母的话说明一个word结束了
			wordcount++;
		}else if(input == '\n'&&isalpha(temp)){
			temp ='\n';//如果输入的是'\n'，且上一个是字母的话说明一个word结束了
			wordcount++;
		}else{
			temp = input;
		}
	}
	count = charcount / wordcount;
	printf("charcount=%d,wordcount%d,平均数：%f\n",charcount,wordcount,count);
	return 0;
}








