//
// Created by 28580 on 2023/7/30.
//
#include "7.30.1.h"

int main(){
    int a=10;
    a=print_star(a);
    print_message();
    return 0;
}

int print_star(int i){
    printf("************************************\n");
    i++;
    return i;
}

void print_message(){
    printf("how\n");
    print_star(3);
}