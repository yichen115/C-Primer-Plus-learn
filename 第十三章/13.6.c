// reducto.c -- reduces your files by two-thirds!
#include <stdio.h>
#include <stdlib.h>    // for exit()
#include <string.h>    // for strcpy(), strcat()
#define LEN 40
char * s_gets(char * st, int n);

int main(int argc, char *argv[])
{
    FILE  *in, *out;   // declare two FILE pointers
    int ch;
    char name[LEN];    // storage for output filename
    int count = 0;
    char name_src[LEN];    // storage for input filename

    printf("请输入想要操作的文件名:");
    s_gets(name_src,LEN);

    if ((in = fopen(name_src, "r")) == NULL)
    {
        fprintf(stderr, "无法打开文件 \"%s\"\n",name_src);
        exit(EXIT_FAILURE);
    }

    strncpy(name,name_src, LEN - 5); // copy filename
    name[LEN - 5] = '\0';
    strcat(name,".red");            // append .red
    if ((out = fopen(name, "w")) == NULL)
    {                       // open file for writing
        fprintf(stderr,"创建输出文件失败.\n");
        exit(3);
    }
    // copy data
    while ((ch = getc(in)) != EOF)
        if (count++ % 3 == 0)
            putc(ch, out);  // print every 3rd char
    // clean up
    if (fclose(in) != 0 || fclose(out) != 0)
        fprintf(stderr,"关闭文件失败\n");
    
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

