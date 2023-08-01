//
// Created by 28580 on 2023/7/30.
//
#include "stdio.h"

struct student{
    char name[20];
    char sex;
    char addr[30];
    int age;
    int num;
    float score;
};

int main(){
    struct student s1={"Peanut Hu",'M',"Jangsu Wuxi",21,1001,99.9};
    struct student sa[3];
    int i;
    for(i=0;i<3;i++){
        scanf("%s %c %s%d%d%f",sa[i].name,&sa[i].sex,sa[i].addr,&sa[i].age,&sa[i].num,&sa[i].score);
    }
    for(i=0;i<3;i++){
        printf("name:%s\tsex:%c\taddr:%s\tage:%d\tnum:%d\tscore:%f\n",sa[i].name,sa[i].sex,sa[i].addr,sa[i].age,sa[i].num,sa[i].score);
    }
    printf("name:%s\tsex:%c\taddr:%s\tage:%d\tnum:%d\tscore:%f\n",s1.name,s1.sex,s1.addr,s1.age,s1.num,s1.score);
}