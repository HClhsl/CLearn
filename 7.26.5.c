//
// Created by 28580 on 2023/7/26.
//homework 5.2
#include "stdio.h"
#include "string.h"

int main(){
    char a[30];
    char b[30];
    gets(a);
    unsigned int len=strlen(a);
    for(int i=0;i<len;i++){
        b[i]=a[len-1-i];
    }
    puts(b);
    int res= strcmp(a,b);
    switch(res) {
        case 0:
            printf("%d",0);
            break;
        case 1:
            printf("%d",1);
            break;
        case -1:
            printf("%d",-1);
            break;
        default:
            puts("error");
    }

}