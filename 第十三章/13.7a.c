#include <stdio.h>
#include <stdlib.h>
#include <string.h>
FILE *fp1,*fp2;
char *ptr1;
char *ptr2;
char temp[50];
int main(int argc, char *argv[]){
    if(argc < 3){
        printf("用法：%s 文件1 文件2\n",argv[0]);
        exit(EXIT_FAILURE);
    }
    if ((fp1 = fopen(argv[1], "r")) == NULL)
    {
        fprintf(stdout, "无法打开 %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    if ((fp2 = fopen(argv[2], "r")) == NULL)
    {
        fprintf(stderr, "无法打开 %s\n", argv[2]);
        exit(EXIT_FAILURE);
    }
    do{
        if((ptr1 = fgets(temp,20,fp1)) != NULL){
            puts(temp);
        }

        if((ptr2 = fgets(temp,20,fp2)) != NULL){
            puts(temp);
        }
    }
    while(ptr1 != NULL && ptr2 != NULL);
    fclose(fp1);
    fclose(fp2);
    printf("\n");
    return 0;
}