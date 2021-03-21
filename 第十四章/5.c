#include <stdio.h>
#include <string.h>
char * s_gets(char * st, int n);
#define CSIZE 4

struct name {
    char fname[20];
    char lname[20];
};

struct student {
    struct name na;
    float grade[3];
    float average;
};

void get_info(struct student students[]);
void get_arver(struct student students[]);
void show_info(struct student students[]);
void get_arverall(struct student students[]);

int main(){
    struct student students[CSIZE] = {
        {{"aa","bb"}},
        {{"cc","dd"}},
        {{"ee","ff"}},
        {{"gg","hh"}}
    };
    get_info(students);
    get_arver(students);
    show_info(students);
    get_arverall(students);

    return 0;
}

void get_info(struct student students[]){
    for(int i=0;i<CSIZE;i++){
        printf("请输入 %s %s 的三个成绩：",students[i].na.fname,students[i].na.lname);
        scanf("%f %f %f",&students[i].grade[0],&students[i].grade[1],&students[i].grade[2]);
    }
}

void get_arver(struct student students[]){
        for(int i=0;i<CSIZE;i++){
            students[i].average = (students[i].grade[0]+students[i].grade[1]+students[i].grade[2]) / 3;
    }
}

void show_info(struct student students[]){
    for(int i=0;i<CSIZE;i++){
        printf("%s %s 的成绩分别是:%f %f %f，平均分为 %f\n",students[i].na.fname,students[i].na.lname,students[i].grade[0],students[i].grade[1],students[i].grade[2],students[i].average);
    }
}

void get_arverall(struct student students[]){
    float sum = 0;
    for(int i=0;i<CSIZE;i++){
        sum += students[i].average;
    }
    printf("总的平均分是：%f\n",sum/CSIZE);
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
