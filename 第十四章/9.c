//有点乱
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char * s_gets(char * st, int n);

struct seat{
    int id;
    int scheduled;
    int confirmed;
    char fname[20];
    char lname[20];
};

struct flight{
    int id;
    struct seat seats[12];
};

struct flight flights[4] = {
    {102,{}},
    {311,{}},
    {444,{}},
    {519,{}}
};

void choice_flight(){
    printf("你想乘坐哪一趟航班\n");
    printf("(a) 102\n(b) 311\n(c) 444\n(d) 519\n(e) 退出\n");
}

void menu(int id){
    printf("%d 航班选座系统：\n",id);
    printf("(a) 展示空座位的个数\n");
    printf("(b) 展示空座位的 id\n");
    printf("(c) 打印所有座位信息\n");
    printf("(d) 分配一个座位给顾客\n");
    printf("(e) 删除一个座位\n");
    printf("(f) 确认座位分配\n");
    printf("(q) 退出\n");
}

void initialize(struct seat *seats)
{
    for (int i = 0; i < 12; i++)
    {
        seats[i].id = i + 1;
        seats[i].scheduled = 0;
        seats[i].confirmed = 0;
        strcpy(seats[i].fname, "");
        strcpy(seats[i].lname, "");
    }
}

void show_empty_count(struct seat *seats){
    int count = 0;
    for(int i=0;i<12;i++){
        if(seats[i].scheduled == 0){
            count++;
        }
    }
    printf("一共有 %d 个空座位\n",count);
}

void show_empty_id(struct seat *seats){
    for(int i=0;i<12;i++){
        if(seats[i].scheduled == 0){
            printf("%2d 号没有被预定\n",i+1);
        }
    }
}

void show_list_sort(struct seat *seats){
    for(int i=0;i<12;i++){
        printf("%2d 号，预定信息：%d 乘客：%10s %10s 确认信息：%d\n",seats[i].id,seats[i].scheduled,seats[i].fname,seats[i].lname,seats[i].confirmed);
    }
}

void assign_seat(struct seat *seats){
    int i;
    printf("分配几号座位(1-12)\n");
    scanf("%d",&i);
    if(seats[i-1].scheduled == 1){
        printf("这个座位已经被预定了\n");
    }
    else{
        seats[i-1].id=i;
        seats[i-1].scheduled = 1;
        printf("输入乘客的姓：");
        while(getchar()!='\n') continue;
        s_gets(seats[i-1].fname,20);
        printf("输入乘客的名：");
        scanf("%20s",seats[i-1].lname);
        //如果还是用s_gets的话下面就要输入两次choice了
    }
}

void delete_seat(struct seat *seats){
    int i=0;
    printf("需要删除哪一个座位的预定信息(1-12)\n");
    scanf("%d",&i);
    seats[i-1].id = i;
    seats[i-1].scheduled = 0;
    seats[i-1].confirmed = 0;
    strcpy(seats[i-1].fname, "");
    strcpy(seats[i-1].lname, "");
}

void confirm_seat(struct seat *seats){
    int i=0;
    printf("需要确认哪一个座位的预定信息(1-12)\n");
    scanf("%d",&i);
    seats[i-1].confirmed = 1;
}

int flight_seat(struct flight *flights,int idd){
    menu(idd);
    char choice;
    while((choice=getchar()) != EOF){
        switch(choice){
            case ('a'):
                show_empty_count(flights->seats);
                break;
            case ('b'):
                show_empty_id(flights->seats);
                break;
            case ('c'):
                show_list_sort(flights->seats);
                break;
            case ('d'):
                assign_seat(flights->seats);
                break;
            case ('e'):
                delete_seat(flights->seats);
                break;
            case ('f'):
                confirm_seat(flights->seats);
                break;
            case ('q'):
                return 0;
        }
        menu(idd);
        while(getchar()!='\n') continue;
    }
}

int main(){
    for(int i=0;i<4;i++){
        initialize(flights[i].seats);
    }
    choice_flight();
    char chfl;
    while((chfl = getchar()) != 'e'){
        while (getchar() != '\n') continue;
        switch(chfl){
            case('a'):
                flight_seat(&flights[0],102);
                break;
            case('b'):
                flight_seat(&flights[1],311);
                break;
            case('c'):
                flight_seat(&flights[2],444);
                break;
            case('d'):
                flight_seat(&flights[3],519);
                break;
        }
        choice_flight();
        getchar();
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
