//
// Created by 28580 on 2023/7/30.
//
#include "stdio.h"
double pi=3.1415926;
double circle_range(double r){
    return pi*r*r;
}
int main(){
    double r=3.6;
    double s;
    s= circle_range(r);
    printf("%f",s);
}