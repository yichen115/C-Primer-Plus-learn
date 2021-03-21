#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char * s_gets(char * st, int n);

struct month{
    char name[10];
    char abbrev[4];
    int days;
    int monumb;
};

struct month months[12] = {
    {"January","jan",31,1},
    {"February","feb",28,2},
    {"March","mar",31,3},
    {"April","apr",30,4},
    {"May","may",31,5},
    {"June","jun",30,6},
    {"July","jul",31,7},
    {"August","aug",31,8},
    {"September","sep",30,9},
    {"October","oct",31,10},
    {"November","nov",30,11},
    {"December","dec",31,12}
};

int ret2days(char *m,int y,int d,struct month *ptr){
    int total=0;
    int mo;
    //判断是不是闰年，给二月天数赋值
    if(y%400==0)
        ptr[1].days = 29;
    else if(y%4==0&&y%100!=0)
        ptr[1].days = 29;

    for(int i=0;i<12;i++){
        if(strcmp(m,ptr[i].abbrev)==0){
            mo = i;
            break;
        }
    }
    for(int i=0;i<mo;i++)
        total += ptr[i].days;
    total += d;
    return total;
}

int main(){
    char mon[4];
    int total;
    int ye;
    int da;
    printf("请输入年份:");
    scanf("%d",&ye);
    getchar();
    printf("请输入月份拼写(如:jan)：");
    s_gets(mon,4);
    printf("请输入第几天:");
    scanf("%d",&da);
    total = ret2days(mon,ye,da,months);
    printf("一共%d天\n",total);
    return 0;

}


char * s_gets(char * st, int n)
{
    char * find;
    char * ret_val;
    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        find = strchr(st, '\n');    //查找换行符
        if (find)
            *find = '\0';          //替换为空字符
        else
            while (getchar() != '\n')
                continue;
    }
    return ret_val;
}