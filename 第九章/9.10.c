#include <stdio.h>
void to_binary(unsigned long n, int b);
int main(void) {
	unsigned long number;
	int cont;
	printf("输入一个整数与想转换的进制（2-8）输入 q 退出:\n"); 
	while (scanf("%lu %d", &number,&cont) == 2) {
		printf("%d进制是这样的: ",cont); 
		to_binary(number,cont); 
		putchar('\n'); 
		printf("输入一个整数与想转换的进制（2-8）输入 q 退出:\n");  
	}
	printf("Done.\n"); 
	return 0;
}
void to_binary(unsigned long n, int b) 
{	int r;
	r = n % b;
	if (n >= b) to_binary(n / b,b);
	putchar('0' + r);
	return;
}