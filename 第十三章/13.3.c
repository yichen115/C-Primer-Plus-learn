#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
char * s_gets(char * st, int n);
char temp[100];
int main(int argc,char *argv[]){
    FILE *fpin,*fpout;
    char name_in[20];
    char name_out[20];
    char tempc;
    printf("请输入源文件名：");
    s_gets(name_in,20);
    printf("请输入目标文件名：");
    s_gets(name_out,20);
    fpin = fopen(name_in,"r");
    fpout = fopen(name_out,"w");
    if(fpin == NULL){
        printf("打开%s文件失败\n",name_in);
        exit(EXIT_FAILURE);
    }
    if(fpout == NULL){
        printf("打开%s文件失败\n",name_out);
        exit(EXIT_FAILURE);
    }
    while((tempc = getc(fpin))!= EOF)
    {
        tempc = toupper(tempc);
        putc(tempc,fpout);
    }
    fclose(fpin);
    fclose(fpout);
    printf("\n");
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
            *find = '\0';           //替换为空字符
        else
            while (getchar() != '\n')
                continue;
    }

    return ret_val;
}