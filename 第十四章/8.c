#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char * s_gets(char * st, int n);

struct flight{
    int id;
    int scheduled;
    char fname[20];
    char lname[20];
};

struct flight flights[12];

void menu(){
    printf("菜单：\n");
    printf("(a) 展示空座位的个数\n");
    printf("(b) 展示空座位的 id\n");
    printf("(c) 打印所有座位信息\n");
    printf("(d) 分配一个座位给顾客\n");
    printf("(e) 删除一个座位\n");
    printf("(q) 退出\n");
}

void initialize(struct flight *flights)
{
    for (int i = 0; i < 12; i++)
    {
        flights[i].id = i + 1;
        flights[i].scheduled = 0;
        strcpy(flights[i].fname, "");
        strcpy(flights[i].lname, "");
    }
}

void show_empty_count(struct flight *flights){
    int count = 0;
    for(int i=0;i<12;i++){
        if(flights[i].scheduled == 0){
            count++;
        }
    }
    printf("一共有 %d 个空座位\n",count);
}

void show_empty_id(struct flight *flights){
    for(int i=0;i<12;i++){
        if(flights[i].scheduled == 0){
            printf("%d 号没有被预定\n",i+1);
        }
    }
}

void show_list_sort(struct flight *flights){
    for(int i=0;i<12;i++){
        printf("%d 号，预定信息：%d 乘客：%s %s\n",flights[i].id,flights[i].scheduled,flights[i].fname,flights[i].lname);
    }
}

void assign_seat(struct flight *flights){
    int i;
    printf("分配几号座位(1-12)\n");
    scanf("%d",&i);
    if(flights[i-1].scheduled == 1){
        printf("这个座位已经被预定了\n");
    }
    else{
        flights[i-1].id=i;
        flights[i-1].scheduled = 1;
        printf("输入乘客的姓：");
        while(getchar()!='\n') continue;
        s_gets(flights[i-1].fname,20);
        printf("输入乘客的名：");
        scanf("%20s",flights[i-1].lname);
        //如果还是用s_gets的话下面就要输入两次choice了
    }
}

void delete_seat(struct flight *flights){
    int i=0;
    printf("需要删除哪一个座位的预定信息(1-12)\n");
    scanf("%d",&i);
    flights[i-1].id = i;
    flights[i-1].scheduled = 0;
    strcpy(flights[i-1].fname, "");
    strcpy(flights[i-1].lname, "");
}

int main(){
    initialize(flights);
    menu();
    char choice;
    while((choice=getchar()) != EOF){
        switch(choice){
            case ('a'):
                show_empty_count(flights);
                break;
            case ('b'):
                show_empty_id(flights);
                break;
            case ('c'):
                show_list_sort(flights);
                break;
            case ('d'):
                assign_seat(flights);
                break;
            case ('e'):
                delete_seat(flights);
                break;
            case ('q'):
                exit(1);
        }
        menu();
        while(getchar()!='\n') continue;
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
