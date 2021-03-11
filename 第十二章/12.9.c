#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

char **get_word(int count);

int main(){
    char **ptr;
    int word_count;
    printf("你打算输入多少个单词:");
    scanf("%d",&word_count);
    while(getchar() != '\n')
        continue;           //通过这个来规避回车的影响
    printf("好吧，接下来输入%d个单词吧:\n",word_count);
    ptr = get_word(word_count);
    printf("这是你输入的单词：\n");
    for(int i=0;i<word_count;i++){
        puts(ptr[i]);
        free(ptr[i]);
    }
    free(ptr);
    return 0;
}

char **get_word(int count){
    char **ptr;
    char ch;
    ptr = (char **)malloc(count * sizeof(char *));//malloc一个存放char型指针的数组
    for(int i=0,j=0;i<count;i++){
        ptr[i] = (char *)malloc(50*sizeof(char));//一个单词不能超过50个char把
        //malloc一个指向50个char的数组，这块地址的指针放在ptr数组中
        while(isspace(ch = getchar()))//如果不是空格，说明是单词开始了
            continue;
        ptr[i][0] = ch;//单词首字母
        j=1;
        while(!isspace(ptr[i][j] = getchar()))
            j++;
        ptr[i][j] = '\0';//最后加上个'\0'

    }
    return ptr;
}