#include <stdio.h>
double a[3][5];
void arr_pj(int r,int c,double a[r][c]);
void row_pj(int r,int c,double a[r][c], int row);
void arr_max(int r,int c,double a[r][c]);
void input(int r,int c,double a[r][c]);
int main(){
	printf("输入15个数据,每次输完回车\n");
	input(3,5,a);
	arr_pj(3,5,a);
	for(int i=0;i<3;i++)
		row_pj(3,5,a,i);
	arr_max(3,5,a);
	return 0;
}

void row_pj(int r,int c,double a[r][c],int row){
	double sum=0;
	for(int j=0;j<c;j++){
		sum += a[row][j];
	}
	printf("第%d行的平均值为:%f\n",row,sum/c);
}

void arr_pj(int r,int c,double a[r][c]){
	double sum=0;
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			sum += a[i][j];
		}
	}
	printf("平均值为:%f\n",sum/(r*c));
}

void arr_max(int r,int c,double a[r][c]){
	double temp=0;
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			if(temp<a[i][j]) temp=a[i][j];
		}
	}
	printf("最大值为:%f\n",temp);
}

void input(int r,int c,double a[r][c]){
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			scanf("%lf",&a[i][j]);
		}
	}
	printf("输入完成\n");
}













