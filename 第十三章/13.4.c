#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
FILE *fp;
int main(int argc,char *argv[]){
    char tempc;
    for(int i=1;i<argc;i++){
        printf("filename:%s\n",argv[i]);
        if((fp = fopen(argv[i],"r")) == NULL){
            printf("不能打开%s文件",argv[i]);
        }
        while((tempc = getc(fp))!= EOF)
        {
            putc(tempc,stdout);
        }
        printf("\n\n");
    }
    return 0;
}