#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rand100()
{
    return rand() % 100 + 1;
}
int main(){
    int num1=0,num2=0,num3=0,num4=0,num5=0,num6=0,num7=0,num8=0,num9=0,num10=0;
    time_t t;
    srand((unsigned) time(&t));
    for (int i = 0; i < 1000; i++){
        switch(rand100()){
            case 1:
                num1++;
                break;
            case 2:
                num2++;
                break;
            case 3:
                num3++;
                break;
            case 4:
                num4++;
                break;
            case 5:
                num5++;
                break;
            case 6:
                num6++;
                break;
            case 7:
                num7++;
                break;
            case 8:
                num8++;
                break;
            case 9:
                num9++;
                break;
            case 10:
                num10++;
                break;
        };
    }
    printf("1出现了%d次\n2出现了%d次\n3出现了%d次\n4出现了%d次\n5出现了%d次\n6出现了%d次\n7出现了%d次\n8出现了%d次\n9出现了%d次\n10出现了%d次\n",num1,num2,num3,num4,num5,num6,num7,num8,num9,num10);
    //可以存在数组里面啊！！！！！！！
    printf("\n");
    return 0;
}