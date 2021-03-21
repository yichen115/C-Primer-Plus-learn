#include<stdio.h>
#include<stdlib.h>
#include <string.h>
char * s_gets(char * st, int n);
int main(int argc,char *argv[]){
    int ch;
    FILE *fp;
    char file_name[20];
    printf("请输入文件名:");
    //fgets(file_name, 20, stdin);
    s_gets(file_name, 20);
    unsigned long count = 0;
    if((fp = fopen(file_name,"r")) == NULL){
        printf("can't open file:%s\n",file_name);
        exit(EXIT_FAILURE);
    }
    while((ch = getc(fp)) != EOF){
        putc(ch,stdout);
        count++;
    }
    fclose(fp);
    printf("File %s has %lu charactersn\n",argv[1],count);
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