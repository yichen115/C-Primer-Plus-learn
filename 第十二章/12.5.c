#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int cmp(const void *a, const void *b)
{
    return *(int *)b - *(int *)a;
}

int rand100()
{
    return rand() % 10 + 1;
}
int main(){
    int num[100];
    time_t t;
    srand((unsigned) time(&t));
    for (int i = 0; i < 100; i++){
        num[i] = rand100();
        printf("%4d",num[i]);
        if((i+1)%10==0){
            printf("\n");
        }
    }

    qsort(num, 100, sizeof(int), cmp);
    printf("\n\n");
    for (int k = 0; k < 100; k++){
        printf("%4d",num[k]);
        if((k+1)%10==0){
            printf("\n");
        }
    }
    printf("\n");
    return 0;
}