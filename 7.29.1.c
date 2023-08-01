//
// Created by 28580 on 2023/7/29.
//
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
char* print_stack(){
    char c[20]="Happy Birthday!";
    puts(c);
    return c;
}
char* print_malloc(){
    char *p;
    p=(char*) malloc(20);
    strcpy(p,"Merry Christmas!");
    puts(p);
    return p;
}
int main(){
    char* p;
    p=print_stack();
    puts("Stack:");
    puts(p);
    p=print_malloc();
    puts("Malloc:");
    puts(p);
    return 0;
}