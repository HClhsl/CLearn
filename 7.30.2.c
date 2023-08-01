//
// Created by 28580 on 2023/7/30.
//
#include "stdio.h"

int mmpl(int n){
    if(n==1){
        return 1;
    }
    return n*mmpl(n-1);
}

int step(int n){
    if(n==1){
        return 1;
    }
    else if(n==2){
        return 2;
    }
    return step(n-1)+ step(n-2);
}
int main(){
    int n,ret;
    scanf("%d",&n);
    ret=mmpl(n);
    printf("%d\n",ret);
    scanf("%d",&n);
    ret= step(n);
    printf("%d",ret);
}