#include<stdio.h>
int main(){
	float yj=0,tc=0,hlb=0;
	float yj_end=0,tc_end=0,hlb_end=0;
	float yun;
	float zhong;
	float ding;
	char choice;
	printf("***采购系统***\na：输入洋蓟的磅数\nb.输入甜菜的磅数\nc.输入胡萝卜的磅数\n");
	while((choice = getchar())!='q'){
		switch(choice){
			case 'a':
				printf("输入洋蓟的磅数：");
				scanf("%f",&yj);
				yj_end+=yj;
				break;
			case 'b':
				printf("输入甜菜的磅数：");
				scanf("%f",&tc);
				tc_end+=tc;
				break;
			case 'c':
				printf("输入胡萝卜的磅数：");
				scanf("%f",&hlb);
				hlb_end+=hlb;
				break;
		}
	}
	ding = yj_end*2.05+tc_end*1.15+hlb_end*1.09;
	if(ding>100){
		ding = ding * 0.95;
	}
	zhong = yj_end+tc_end+hlb_end;
	if(zhong <=5){
		yun=6.5;
	}
	else if(zhong<=20&&zhong>5){
		yun=14;
	}
	else if(zhong >20){
		yun = 14+(zhong-20)*0.5;//下载的标准答案没有减去20的基础重量，导致多了10元钱
	}
	printf("你要了%.2f磅的洋蓟,%.2f磅的甜菜,%.2f磅的胡萝卜\n",yj_end,tc_end,hlb_end);
	printf("本次采购总磅数:%.2f\n",zhong);
	printf("本次采购要支付运费:%.2f\n",yun);
	if(ding>100){
		printf("本次订单超过100美元，享受九五折的优惠\n");
	}
	printf("本次采购订单费用:%.2f\n",ding);
	printf("本次采购总计需要支付:%.2f\n",ding+yun);
	return 0;
}



















