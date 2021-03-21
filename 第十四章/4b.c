#include <stdio.h>
#include <string.h>
char * s_gets(char * st, int n);

struct name {
    char fname[20];
    char mname[20];
    char lname[20];
};

struct member {
    int id;
    struct name na;
};

void print(struct member members);

int main(){
    struct member members[5] = {
        {1001,{"aa","bb","cc"}},
        {1002,{"dd"," ","ff"}},
        {1003,{"gg","hh","ii"}},
        {1004,{"jj"," ","ll"}},
        {1005,{"mm","nn","oo"}},
    };
    for(int i=0;i<5;i++){
        print(members[i]);
    }
    return 0;
}

void print(struct member members){
        if(members.na.mname[0] == ' '){
            printf("%s,%s -- %d\n",members.na.fname,members.na.lname,members.id);
        }
        else{
            printf("%s,%s %c. -- %d\n",members.na.fname,members.na.lname,members.na.mname[0],members.id);
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
