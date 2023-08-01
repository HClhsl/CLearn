//
// Created by 28580 on 2023/7/31.
//
#include "stdio.h"

struct student{
    char name[20];
    int age;
    int num;
    char sex;
};

int main(){
    struct student s1={"Peanut Hu",19,1001,'M'};
    struct student sa[3]={"Rick Hu",20,1002,'M',"Bloom Hu",21,1003,'M',"Peter John",19,1004,'F'};
    struct student *p;
    p=&s1;
    printf("Name:%s\tAge:%d\tNum:%d\tSex:%c\n",p->name,p->age,p->num,p->sex);
    p=sa;
    printf("Name:%s\tAge:%d\tNum:%d\tSex:%c\n",p->name,p->age,p->num,p->sex);
    p++;
    printf("Name:%s\tAge:%d\tNum:%d\tSex:%c\n",(*p).name,(*p).age,(*p).num,(*p).sex);
    p++;
    printf("Name:%s\tAge:%d\tNum:%d\tSex:%c\n",(*p).name,(*p).age,(*p).num,(*p).sex);
}