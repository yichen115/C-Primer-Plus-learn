#include<stdio.h>
int main(){
	int type;
	float money;
	printf("请输入类型:\n");
	printf("1.单身         2.户主\n");
	printf("3.已婚,共有    4.已婚,离异\n");
	while((scanf("%d",&type))>0){
		printf("请输入应纳税收入:");
		scanf("%f",&money);
		if(type==1){
			if(money<=17850)
				printf("应缴纳%f的税\n\n",money*0.15);
			else
				printf("应缴纳%f的税\n\n",17850*0.15+(money-17850)*0.28);
		}
		if(type==2){
			if(money<=23900)
				printf("应缴纳%f的税\n\n",money*0.15);
			else
				printf("应缴纳%f的税\n\n",23900*0.15+(money-23900)*0.28);
		}
		if(type==3){
			if(money<=29750)
				printf("应缴纳%f的税\n\n",money*0.15);
			else
				printf("应缴纳%f的税\n\n",29750*0.15+(money-29750)*0.28);
		}
		if(type==4){
			if(money<=14875)
				printf("应缴纳%f的税\n",money*0.15);
			else
				printf("应缴纳%f的税\n",14875*0.15+(money-14875)*0.28);
		}
		printf("请输入类型:\n");
		printf("1.单身         2.户主\n");
		printf("3.已婚,共有    4.已婚,离异\n");
	}
	return 0;
}