// power.c -- 计算数的整数幂
#include <stdio.h>
double power(double n, int p);
int main(void)
{
    double x, xpow;
    int exp;
    printf("输入一个正整数和幂数\n");
    while (scanf("%lf %d", &x, &exp) == 2)
    {
		if(x==0&&exp==0){
			printf("0的0次幂无意义\n");
			continue;
		}
        xpow = power(x,exp);   // function call
        printf("%.3g的%d次幂是%.5g\n", x, exp, xpow);
        printf("输入一个正整数和幂数\n");
    }
    printf("\n");
    return 0;
} 

double power(double n, int p)  
{
	double pow = 1.0;
	int i;
	if(n!=0&&p==0){pow = 1.0;}
	if(p>0){
	pow = n * power(n,--p);
	}
	if(p<0){
	pow =  (1/n) * power(n,++p);
	}
	return pow;
}
