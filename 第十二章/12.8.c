#include<stdio.h>
#include<stdlib.h>
int * make_array(int ele,int val);
void show_array(const int ar[],int n);
int main(){
    int *pa;
    int size;
    int value;
    printf("输入元素个数:");
    while(scanf("%d",&size) == 1 && size>0){
        printf("输入想要初始化的值:");
        scanf("%d",&value);
        pa=make_array(size,value);
        if(pa){
            show_array(pa,size);
            free(pa);
        }
        printf("输入元素个数(<1 to quit):");
    }
    printf("bye~\n");
    return 0;
}

int * make_array(int ele,int val){
    int *pa;
    //int *pb;
    pa = (int *)malloc(ele * sizeof(int));
    //pb = pa;
    for(int i=0;i<ele;i++){
        pa[i] = val;//
        //*pa++ = val;//之前用这个试了半天，你在这里++之后返回的不是原来那个地址了！
    }
    return pa;//
    //return pb;
}
void show_array(const int ar[],int n){
    printf("即将通过show_array函数展示创建并初始化的数组\n");
    for(int i=0;i<n;i++){
        if(i%8==0){
            printf("\n");
        }
        printf("%d",ar[i]);
    }
    printf("\n\n");
}