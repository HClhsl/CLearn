//
// Created by 28580 on 2023/7/27.
//
#include "stdio.h"
int main(){
    int a[10]={1,2,3,4,5,6,7,8,9,0};
    int* p=a;
    for(int i=0;i<10;i++){
        printf("%d ",*(p+9-i));
    }
    p=&a[9];
    printf("\n");
    for(int i=0;i<10;i++){
        printf("%d ",*(p-9+i));
    }
}