#include<stdio.h>
#include <stdlib.h>
int rollem(int sides)
{
    int roll;
    roll = rand() % sides + 1;
    return roll;
}

int roll_n_dice(int dice, int sides)
{
    int d;
    int total = 0;
    if (sides < 2)
    {
        printf("Need at least 2 sides.\n");
        return -2;
    }
    if (dice < 1)
    {
        printf("Need at least 1 dice.\n");
        return -1;
    }
    for (d = 0; d < dice; d++)
        total += rollem(sides);

    return total;
}

int main(){
    int count;
    int sides,dice;
    printf("掷多少次骰子：");
    scanf("%d",&count);
    printf("有多少面和多少个骰子？");
    scanf("%d %d",&sides,&dice);
    printf("这是掷%d次%d个%d面骰子的结果：\n",count,dice,sides);
    for(int i=0;i<count;i++)
    {
        printf("%d\n",roll_n_dice(dice,sides));
    }
    printf("\n掷多少次骰子(q to quit)：");
    while(scanf("%d",&count) == 1)
    {
        printf("这是掷%d次%d个%d面骰子的结果：\n",count,dice,sides);
        for(int i=0;i<count;i++)
        {
           printf("%d\n",roll_n_dice(dice,sides));
        }
        printf("\n掷多少次骰子(q to quit)：");
    }
}