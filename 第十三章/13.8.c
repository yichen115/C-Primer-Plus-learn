#include <stdio.h>
#include <stdlib.h>
#include <string.h>
FILE *fp;
char *ptr1;
char temp[50];
int count;
char ch;
char * s_gets(char * st, int n);
int main(int argc, char *argv[]){
    if(argc < 2){
        printf("用法：%s 字符 文件1 文件2 文件3... 或 %s 字符\n",argv[0],argv[0]);
        exit(EXIT_FAILURE);
    }

    if(argc == 2){
        while((ch = getchar()) != EOF){
            if(ch == argv[1][0]){
                count++;
            }
        }
        printf("在你输入的里面有%d次%c",count,argv[1][0]);
    }
    else{
        for(int i=2;i<argc;i++){
            if((fp = fopen(argv[i],"r")) == NULL){
                printf("打开文件%s失败",argv[i]);
                    exit(EXIT_FAILURE);
            }
			while((ch = getc(fp)) != EOF){
				if(ch == argv[1][0]){
					count++;
				}
			}
		printf("在你%s里面有%d次%c\n",argv[i],count,argv[1][0]);
        count = 0;
		}
        fclose(fp);
    }
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