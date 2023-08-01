#include "stdio.h"

int main(){
    int i,ret;
    float j;
    char k;
    ret=scanf("%d %f %c",&i,&j,&k);
    printf("ret=%d\n",ret);
    printf("i=%d\nj=%f\nk=%c\n",i,j,k);
    scanf("%d",&i);
    scanf("\n%c",&k);
    printf("i=%d\nk=%c\n",i,k);
}