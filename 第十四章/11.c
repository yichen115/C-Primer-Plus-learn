#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
//100个有点多，就按5个算了
//gcc不行，visual studio可以,忘了那个scanf_s怎么关掉了
char * s_gets(char * st, int n);

double fun1(double x){
    return x*2;
}

double fun2(double x){
    return x*3;
}

void transform(double *source, double *purpose, int count, double(*p)(double))
{
    for (int i = 0; i < 5; i++) {
        purpose[i] = (*p)(source[i]);
    }
}

int main() {

    double(*p[4])(double) = { sin,cos,fun1,fun2};
    double source[5], purpose[5];
    printf("给源数组赋值\n");
    for (int i = 0; i < 5; i++) {
        scanf_s("%lf", &source[i]);
    }
    for (int i = 0; i < 4; i++) {
        transform(source, purpose, 5, p[i]);
        printf("目标数组中的值\n");
        for (int i = 0; i < 5; i++) {
            printf("%f ", purpose[i]);
        }
        printf("\n");
    }
    return 0;
}

char * s_gets(char * st, int n)
{
    char * ret_val;
    char * find;

    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        find = strchr(st, '\n');   // look for newline
        if (find)                  // if the address is not NULL,
            *find = '\0';          // place a null character there
        else
            while (getchar() != '\n')
                continue;          // dispose of rest of line
    }
    return ret_val;
}
