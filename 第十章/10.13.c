#include <stdio.h>
double a[3][5];
double arr_pj(double a[3][5]);
void row_pj(double a[3][5], int row);
double arr_max(double a[3][5]);
void input(double a[3][5]);
int main(){
	printf("输入15个数据,每次输完回车\n");
	input(a);
	double pjz,max_s;
	pjz = arr_pj(a);
	printf("平均值为:%f\n",pjz);
	for(int i=0;i<3;i++)
		row_pj(a,i);
	max_s = arr_max(a);
	printf("最大值为:%f\n",max_s);
	return 0;
}

void input(double a[3][5]){
	for(int i=0;i<3;i++){
		for(int j=0;j<5;j++){
			scanf("%lf",&a[i][j]);
		}
	}
	printf("输入完成\n");
}

void row_pj(double a[3][5],int row){
	double sum=0;
	for(int j=0;j<5;j++){
		sum += a[row][j];
	}
	printf("第%d行的平均值为:%f\n",row,sum/5);
}

double arr_pj(double a[3][5]){
	double sum=0;
	for(int i=0;i<3;i++){
		for(int j=0;j<5;j++){
			sum += a[i][j];
		}
	}
	return sum/(3*5);
}

double arr_max(double a[3][5]){
	double temp=0;
	for(int i=0;i<3;i++){
		for(int j=0;j<5;j++){
			if(temp<a[i][j]) temp=a[i][j];
		}
	}
	return temp;
}













