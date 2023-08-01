//
// Created by 28580 on 2023/7/31.
//
#include <stdio.h>

void modify_num(int *b){
    *b=*b+1;
}

int main(){
    int a=10;
    modify_num(&a);
    printf("%d",a);
}