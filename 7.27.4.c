//
// Created by 28580 on 2023/7/27.
//
#include "stdio.h"
#include "string.h"
#include "stdlib.h"

int main(){
    int n;
    char* p;
    scanf("%d",&n);
    p=(char*) malloc(n);
    while(n<20){
        n++;
    }
    strcpy(p,"Merry Christmas!");
    puts(p);
    free(p);
    return 0;
}