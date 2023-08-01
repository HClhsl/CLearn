//
// Created by 28580 on 2023/7/26.
//homework of 5.5
#include "stdio.h"
int main(){
    int a[100];
    int n,t=0;
    int i=0;
    scanf("%d",&n);
    while(n-1){
        scanf("%d",&a[i]);
        n--;
        i++;
    }
    for(;i>=0;i--){
        if(a[i]==2)
            t++;
    }
    printf("%d",t);
};