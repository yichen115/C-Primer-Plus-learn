/* manybook.c -- multiple book inventory */
#include <stdio.h>
#include <string.h>
char * s_gets(char * st, int n);
#define MAXTITL   40
#define MAXAUTL   40
#define MAXBKS   100              /* maximum number of books  */

struct book {                     /* set up book template     */
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
};

void print_input(int count,const struct book library[]);
void print_title(int count,struct book library[]);
void print_value(int count,struct book library[]);

int main(void)
{
    struct book library[MAXBKS]; /* array of book structures */
    int count = 0;

    
    printf("请输入书名\n");

    while (count < MAXBKS && s_gets(library[count].title, MAXTITL) != NULL
           && library[count].title[0] != '\0')
    {
        printf("请输入作者\n");
        s_gets(library[count].author, MAXAUTL);
        printf("请输入价格\n");
        scanf("%f", &library[count++].value);
        while (getchar() != '\n')
            continue;          /* clear input line         */
        if (count < MAXBKS)
            printf("请输入书名\n");
    }
    
    if (count > 0)
    {
        print_input(count,library);
        print_title(count,library);
        print_value(count,library);
    }
    
    return 0;
}

void print_input(int count,const struct book library[]){
    printf("书籍清单(按照输入顺序):\n");
    for (int i = 0; i < count; i++)
        printf("%s by %s: $%.2f\n", library[i].title,library[i].author, library[i].value);
}

void print_title(int count,struct book library[]){
    struct book *temp;
    struct book test;
    temp = library;
    printf("书籍清单(按照标题字母顺序):\n");
    for (int i = 0; i < count-1; i++)
        for(int j=i+1;j < count;j++)
        {
            if(strcmp(library[i].title, library[j].title) > 0){
                test = temp[j];
                temp[j] = temp[i];
                temp[i] = test;
            }
        }
    for (int i = 0; i < count; i++){
        printf("%s by %s: $%.2f\n", temp[i].title,temp[i].author, temp[i].value);
    }

}

void print_value(int count,struct book library[]){
    struct book *temp;
    struct book test;
    temp = library;
    printf("书籍清单(按照价格顺序):\n");
    for (int i = 0; i < count-1; i++)
        for(int j=i+1;j<count;j++)
        {
            if(temp[i].value > temp[j].value){
                test = temp[j];
                temp[j] = temp[i];
                temp[i] = test;
            }
        }
    for (int i = 0; i < count; i++){
        printf("%s by %s: $%.2f\n", temp[i].title,temp[i].author, temp[i].value);
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
