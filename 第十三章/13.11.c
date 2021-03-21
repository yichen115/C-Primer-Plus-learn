#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc,char *argv[]){
    FILE *fp;
    char temp[256];
    if(argc < 3){
        printf("用法：%s 字符 文件名\n",argv[0]);
        exit(EXIT_FAILURE);
    }
    if((fp = fopen(argv[2],"r")) == NULL){
        printf("文件打开失败\n");
        exit(EXIT_FAILURE);
    }
    while(fgets(temp,256,fp) != NULL)
    {
        if(strstr(temp,argv[1]) != NULL){
            fputs(temp,stdout);
        }
    }
    if(fclose(fp) != 0){
        printf("文件关闭失败\n");
    }
    return 0;
}