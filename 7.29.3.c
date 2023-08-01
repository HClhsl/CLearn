//
// Created by 28580 on 2023/7/29.
//
#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main(){
    int n;
    char *p;
    char c;
    scanf("%d",&n);
    p=(char*) malloc(n);
    scanf("%c",&c);
    gets(p);
    puts(p);
}