/* 不太理解题目啊哈哈哈 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXTITL  40
#define MAXAUTL  40
#define MAXBKS   10             /* maximum number of books */

char * s_gets(char * st, int n);

struct book {                   /* set up book template    */
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
};

void edit_book(struct book *ptr);

int main(void)
{
    struct book library[MAXBKS];
    int count = 0;
    int index, filecount;
    FILE * pbooks;
    int size = sizeof (struct book);
    
    if ((pbooks = fopen("book.dat", "r+b")) == NULL)
    {
        fputs("无法打开 book.dat\n",stderr);
        exit(1);
    }
    rewind(pbooks); 
    while (count < MAXBKS &&  fread(&library[count], size, 1, pbooks) == 1)
    {
        printf("本条记录：%s by %s: $%.2f\n",library[count].title,library[count].author,library[count].value);
        char choice;
        printf("请输入选项\n [d]删除这条数据 [m]修改这条数据 [n]继续\n");
        choice = getchar();
        while(getchar() != '\n') continue;
        switch(choice){
            case('n'):
                break;
            case('m'):
                edit_book(&library[count]);
                break;
            case('d'):
                count--;//count--之后下面count++，再读进来就覆盖掉了
                break;
            default:
                break;
        }
        count++;
    }

    fclose(pbooks);

    if (count == MAXBKS)
    {
        fputs("满了...\n", stderr);
        exit(2);
    }
    
    puts("请输入书籍名");
    while (count < MAXBKS && s_gets(library[count].title, MAXTITL) != NULL && library[count].title[0] != '\0')
    {
        puts("输入作者名");
        s_gets(library[count].author, MAXAUTL);
        puts("输入价格");
        scanf("%f", &library[count++].value);
        while (getchar() != '\n')
            continue;                /* clear input line  */
        if (count < MAXBKS)
            puts("输入书籍名");
    }

    if ((pbooks = fopen("book.dat", "wb")) == NULL)
    {
        fputs("无法打开 book.dat\n",stderr);
        exit(1);
    }
    //这里打开文件直接清空，如果前面删完了，这里不写入就是空文件了，如果没删完就剩下的写入
    if (count > 0)
    {
        puts("你的书籍清单");
        for (index = 0; index < count; index++)
            printf("%s by %s: $%.2f\n",library[index].title,library[index].author, library[index].value);
        fwrite(library, size, count,pbooks);
    }

    puts("Bye~~~\n");
    fclose(pbooks);
    
    return 0;
}

void edit_book(struct book *ptr){
    printf("请输入新书名\n");
    s_gets(ptr->title,40);
    printf("请输入新作者\n");
    s_gets(ptr->author,40);
    printf("请输入新价格\n");
    scanf("%f",&ptr->value);
    while (getchar() != '\n') continue;  
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

