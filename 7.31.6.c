//
// Created by 28580 on 2023/7/31.
//
#include "stdio.h"
typedef struct student{
    int num;
    char name[20];
    char sex;
}stu;

int main(){
    stu s1;
    scanf("%d%s %c",&s1.num,s1.name,&s1.sex);
    printf("%d %s %c",s1.num,s1.name,s1.sex);
}