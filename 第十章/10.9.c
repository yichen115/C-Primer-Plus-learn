#include<stdio.h>
double a[3][5]={{1.1,1.1,1.1,1.1,1.1},{2.2,2.2,2.2,2.2,2.2},{3.3,3.3,3.3,3.3,3.3}};
double b[3][5]={0};
void copy_arr(int r,int c,double arr1[r][c],double arr2[r][c]);
void print(int r,int c,double arr[r][c]);

int main(){
	printf("一开始：\n");
	print(3,5,a);
	print(3,5,b);
	copy_arr(3,5,a,b);
	printf("之后：\n");
	print(3,5,a);
	print(3,5,b);
	return 0;
}

void copy_arr(int r,int c,double arr1[r][c],double arr2[r][c]){
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			arr2[i][j]=arr1[i][j];
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




















