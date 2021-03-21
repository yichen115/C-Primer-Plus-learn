#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char * s_gets(char * st, int n);
char text[50];
char *fun1(char *p){
    printf("[1] %s\n",p);
    return p;
}
char *fun2(char *p){
    printf("[2] %s\n",p);
    return p;
}
char *fun3(char *p){
    printf("[3] %s\n",p);
    return p;
}

int main(){
    char *(*ptr[3])(char *a);
    char choice;
    printf("菜单：\n(a) 函数1\n(b) 函数2\n(c) 函数3\n");
    while((choice=getchar()) != EOF){
        while(getchar()!='\n') continue;
        switch(choice){
            case 'a':
                ptr[0]=&fun1;
                printf("你选择了 %c，请输入内容吧\n",choice);
                s_gets(text,50);
                ptr[0](text);
                break;
            case 'b':
                ptr[1]=&fun2;
                printf("你选择了 %c，请输入内容吧\n",choice);
                s_gets(text,50);
                ptr[1](text);
                break;
            case 'c':
                ptr[2]=&fun3;
                printf("你选择了 %c，请输入内容吧\n",choice);
                s_gets(text,50);
                ptr[2](text);
                break;
        }
        printf("菜单：\n(a) 函数1\n(b) 函数2\n(c) 函数3\n");
    }
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
                continue;          // dispose of rest of line
    }
    return ret_val;
}
