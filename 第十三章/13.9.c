#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 41
int count = 0;
int main(void)
{
    FILE *fp;
    char words[MAX];
    
    if ((fp = fopen("wordy", "a+")) == NULL)
    {
        fprintf(stdout,"无法打开 \"wordy\" 文件\n");
        exit(EXIT_FAILURE);
    }
    
    puts("输入要添加到文件中的单词； 按 ＃ 在行的开头键入要终止的键。");
    while ((fscanf(stdin,"%40s", words) == 1)  && (words[0] != '#'))
        {
            fprintf(fp, "%s\n", words);
        }
    puts("文件内容:");
    rewind(fp);           /* go back to beginning of file */
    while (fscanf(fp,"%s",words) == 1)
    {
        count++;
        printf("%d %s\n",count,words);
    }
    puts("完成~");
    if (fclose(fp) != 0)
        fprintf(stderr,"关闭文件失败\n");
    
    return 0;
}
