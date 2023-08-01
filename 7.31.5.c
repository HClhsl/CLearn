//
// Created by 28580 on 2023/7/31.
//
#include "stdio.h"

void modify_pointer(int** p,int *q){
    *p=q;
}

int main(){
    int *p=NULL;
    int i=10;
    modify_pointer(&p,&i);
    printf("%d",*p);
}