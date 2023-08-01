//
// Created by 28580 on 2023/7/31.
//
#include "stdio.h"

typedef struct student{
    char name[20];
    int age;
    int num;
    char sex;
}stu,*pstu;

typedef int Integer;

int main(){
    stu s={"Peanut Hu",19,1001,'M'};
    pstu p;
    Integer i=10;
    p=&s;
    printf("Name:%s\tAge:%d\tNum:%d\tSex:%c\n",p->name,p->age,p->num,p->sex);
}