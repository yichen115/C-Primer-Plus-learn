#include<stdio.h>
#include<math.h>
int main(void)
{
	float daphne = 100;
	float daphne_end  =100;
	float deirdre = 100;
	float deirdre_end = 100;
	int count = 1;
	while(daphne_end >= deirdre_end){
		daphne_end += daphne*0.1;
		deirdre_end += deirdre_end*0.05;
		count++;
	}
	printf("%f\n%f\n",daphne_end,deirdre_end);
	printf("超过了！！花了%d年的时间\n",count);
	return 0;
}