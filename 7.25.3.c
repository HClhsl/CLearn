#include <stdio.h>

void pristr(char a[]){
    int i=0;
    printf("\n");
    while(a[i]){
        printf("%c",a[i]);
        i++;
    }
}

int main(){
    char a[5]="fucker";
    char b[5]="suck";
    printf("%s\n",a);
    printf("%s\n",b);
    pristr(a);
    pristr(b);
}