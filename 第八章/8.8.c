#include<stdio.h>
int main(){
	char choice;
	float s1,s2;
	fflush(stdin);
	printf("***计算器***\na.add\nb.subtract\nc.multiply\nd.divide\nq.quit\n");
	while((choice=getchar())!='q'){
		if(choice=='a'){
			printf("a请输入两个操作数,用逗号隔开");
			scanf("%f,%f",&s1,&s2);
			printf("运算结果：%f\n",s1+s2);
		}
		if(choice=='b'){
			printf("b请输入两个操作数,用逗号隔开");
			scanf("%f,%f",&s1,&s2);
			printf("运算结果：%f\n",s1-s2);
		}
		if(choice=='c'){
			printf("c请输入两个操作数,用逗号隔开");
			scanf("%f,%f",&s1,&s2);
			printf("运算结果：%f\n",s1*s2);
		}
		if(choice=='d'){
			printf("d请输入两个操作数,用逗号隔开");
			scanf("%f,%f",&s1,&s2);
			if(s2==0){
				printf("被除数不能为0,重新输入：");
				scanf("%f",&s2);
			}
			printf("运算结果：%f\n",s1/s2);
		}
		printf("***计算器***\na.add\nb.subtract\nc.multiply\nd.divide\nq.quit\n");
		getchar();
	}
	return 0;
}