#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
char * s_gets(char * st, int n);

int main(int argc,char *argv[]){
    FILE *fp;
    int line;
    char ch;
    char words[21];
    char file_name[20];
    printf("请输入文件名:");
    s_gets(file_name,20);
    if((fp = fopen(file_name,"r")) == NULL){
        printf("文件%s打开失败",file_name);
        exit(EXIT_FAILURE);
    }
    printf("请输入一个文件位置(小于0退出)：");
    while(scanf("%d", &line) == 1 && line >= 0){
        fseek(fp,line,SEEK_SET);
        while((ch = getc(fp))!='\n'){
            putc(ch,stdout);
        }
        printf("\n请输入一个文件位置(小于0退出)：");
    }
    fclose(fp);
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
                continue;
    }
    return ret_val;
}