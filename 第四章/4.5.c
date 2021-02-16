#include<stdio.h>
int main(){
	float speed;
	float size;
	printf("请输入下载速度和文件大小:");
	scanf("%f %f",&speed,&size);
	printf("你当前下载速度是:%fMb/s\n",speed);
	printf("你下载的文件大小是:%fMB\n",size);
	printf("你要下载%f秒\n",size*8/speed);
	return 0;
}
