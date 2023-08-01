#include <stdio.h>

void printArray(int a[],int b);
void ArrayChange(int a[],int b,int c);

int main(){
    int a[5]={1,2,3,4,5};
    printArray(a,5);
    ArrayChange(a,3,8);
    printArray(a,5);
}

void printArray(int a[],int b){
    for(int i=0;i<b;i++){
        printf("a[%d]=%d  ",i,a[i]);
    }
    printf("\n");
}
void ArrayChange(int a[],int b,int c){
    a[b-1]=c;
}