//
// Created by 28580 on 2023/7/27.
//
#include "stdio.h"
void change(int *x){
    *x+=2;
}

int main(){
    int x=3;
    int* p=&x;
    change(p);
    printf("%d",x);
}