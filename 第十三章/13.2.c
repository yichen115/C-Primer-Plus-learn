#include<stdio.h>
#include<stdlib.h>
#include <string.h>
char * s_gets(char * st, int n);
char temp[100];
int main(int argc,char *argv[]){
    FILE *fpin,*fpout;
    if(argc<2)
    {
        printf("用法:%s 源文件 目标文件\n",argv[0]);
        exit(EXIT_FAILURE);
    }
    fpin = fopen(argv[1],"r");
    fpout = fopen(argv[2],"w");
    if(fpin == NULL){
        printf("打开%s文件失败\n",argv[1]);
        exit(EXIT_FAILURE);
    }
    if(fpout == NULL){
        printf("打开%s文件失败\n",argv[2]);
        exit(EXIT_FAILURE);
    }
    size_t bytes;
    while((bytes = fread(temp,sizeof(char),100,fpin))>0);
        fwrite(temp,sizeof(char),bytes,fpout);
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