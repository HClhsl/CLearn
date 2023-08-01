//
// Created by 28580 on 2023/7/29.
//
#include "stdio.h"
void change(int *p){
    *p/=2;
}
int main(){
    int i;
    scanf("%d",&i);
    change(&i);
    printf("%d",i);
    return 0;
}