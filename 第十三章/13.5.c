/* append.c -- appends files to a file */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFSIZE 4096
#define SLEN 81
void append(FILE *source, FILE *dest);
char * s_gets(char * st, int n);

int main(int argc, char *argv[])
{
    FILE *fa, *fs;  // fa for append file, fs for source file
    int files = 0;  // number of files appended
    int ch;
    
    if(argc < 3){
        printf("用法：%s 目的文件 源文件 源文件 源文件...\n",argv[0]);
        exit(EXIT_FAILURE);
    }
    if ((fa = fopen(argv[1], "a+")) == NULL)
    {
        fprintf(stderr, "无法打开目的文件 %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    if (setvbuf(fa, NULL, _IOFBF, BUFSIZE) != 0)
    {
        fputs("无法创建输出缓冲区\n", stderr);
        exit(EXIT_FAILURE);
    }
    for(int i=2;i<argc;i++)
    {
        if (strcmp(argv[i], argv[1]) == 0)
            fputs("没法追加自己哦~\n",stderr);
        else if ((fs = fopen(argv[i], "r")) == NULL)
            fprintf(stderr, "没法打开 %s\n", argv[i]);
        else
        {
            if (setvbuf(fs, NULL, _IOFBF, BUFSIZE) != 0)
            {
                fputs("无法创建输入缓冲区\n",stderr);
                continue;
            }
            append(fs, fa);
            if (ferror(fs) != 0)
                fprintf(stderr,"读取文件 %s 时发生错误.\n",
                        argv[i]);
            if (ferror(fa) != 0)
                fprintf(stderr,"读取文件 %s 时发生错误\n",
                        argv[1]);
            fclose(fs);
            files++;
            printf("文件%s被追加在了目的文件中\n", argv[i]);
        }
    }
    printf("添加结束， %d 个文件被追加\n", files);
    rewind(fa);
    printf("%s 内容:\n", argv[1]);
    while ((ch = getc(fa)) != EOF)
        putchar(ch);
    fclose(fa);
    printf("\n");
    return 0;
}

void append(FILE *source, FILE *dest)
{
    size_t bytes;
    static char temp[BUFSIZE]; // allocate once
    
    while ((bytes = fread(temp,sizeof(char),BUFSIZE,source)) > 0)
        fwrite(temp, sizeof (char), bytes, dest);
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

