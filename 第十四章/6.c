#include <stdio.h>
#include <string.h>
char * s_gets(char * st, int n);

struct member {
    int id;
    char fname[20];
    char lname[20];
    int count;
    int hit1;
    int hit2;
    int hit3;
};

void get_info(struct member *ptr);
void get_initial(struct member *ptr);
void show_info(struct member *ptr);

int main(){
    struct member members[4];
    get_initial(members);
    get_info(members);
    show_info(members);
}

void get_initial(struct member *ptr){
    for(int i=0;i<4;i++,ptr++){
        ptr->id=0;
        strcpy(ptr->fname,"");
        strcpy(ptr->lname,"");
        ptr->count=0;
        ptr->hit1=0;
        ptr->hit2=0;
        ptr->hit3=0;
    }
}

void get_info(struct member *ptr){
    FILE *fp;
    int id1,count1,hit11,hit21,hit31;
    char fname1[20],lname1[20];
    char filename[20];
    printf("请输入文件名：");
    s_gets(filename,20);
    if((fp = fopen(filename,"r")) == NULL){
        printf("文件打开失败\n");
    }
    while(fscanf(fp,"%d %s %s %d %d %d %d",&id1,fname1,lname1,&count1,&hit11,&hit21,&hit31) == 7){
        ptr[id1-1].id=id1;
        strcpy(ptr[id1-1].fname,fname1);
        strcpy(ptr[id1-1].lname,lname1);
        ptr[id1-1].count = count1;
        ptr[id1-1].hit1 = hit11;
        ptr[id1-1].hit2 = hit21;
        ptr[id1-1].hit3 = hit31;
    }
    fclose(fp);
}

void show_info(struct member *ptr){
    for(int i=0;i<4;i++)
    {
        printf("%d %s %s %d %d %d %d\n",ptr[i].id,ptr[i].fname,ptr[i].lname,ptr[i].count,ptr[i].hit1,ptr[i].hit2,ptr[i].hit3);
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
