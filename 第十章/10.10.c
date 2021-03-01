#include<stdio.h>
double a[3][5]={{1.1,1.1,1.1,1.1,1.1},{2.2,2.2,2.2,2.2,2.2},{3.3,3.3,3.3,3.3,3.3}};
double b[3][5]={{3.3,3.3,3.3,3.3,3.3},{2.2,2.2,2.2,2.2,2.2},{1.1,1.1,1.1,1.1,1.1}};
double c[3][5]={0};
void copy_sum(int r,int c,double arr1[r][c],double arr2[r][c],double arr3[r][c]);
void print(int r,int c,double arr[r][c]);

int main(){
	printf("一开始：\n");
	print(3,5,a);
	printf("\n");
	print(3,5,b);
	printf("\n");
	print(3,5,c);
	copy_sum(3,5,a,b,c);
	printf("之后：\n");
	print(3,5,a);
	printf("\n");
	print(3,5,b);
	printf("\n");
	print(3,5,c);
	return 0;
}

void copy_sum(int r,int c,double arr1[r][c],double arr2[r][c],double arr3[r][c]){
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			arr3[i][j] = arr2[i][j] + arr1[i][j];
		}
	}
}

void print(int r,int c,double arr[r][c]){
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			printf("%.2f ",arr[i][j]);
		}
		printf("\n");
	}
}




















