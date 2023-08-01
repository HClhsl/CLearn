//
// Created by 28580 on 2023/7/27.
//
#include "stdio.h"
void CaseConversion(char *p){
    for(int i=0;*(p+i)!='\0';i++){
        if(*(p+i)>=97&&*(p+i)<=122)
            *(p+i)-=32;
    }
}
int main(){
    char s[30]="Merry Christmas";
    CaseConversion(s);
    puts(s);
}