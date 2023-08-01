//
// Created by 28580 on 2023/7/31.
//
#include "stdio.h"

struct student_type1{
    double score;
    short age;
};

struct student_type2{
    double score;
    int height;
    short age;
};

struct student_type3{
    int height;
    char sex;
    short age;
};

int main(){
    struct student_type1 s1;
    struct student_type2 s2;
    struct student_type3 s3;
    printf("%llu\n", sizeof(s1));
    printf("%llu\n", sizeof(s2));
    printf("%llu\n", sizeof(s3));
}