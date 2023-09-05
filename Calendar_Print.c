//
// Created by 28580 on 2023/8/1.
//
#include "stdio.h"

int is_leap(int year){
    if((year%4==0&&year%100!=0)||year%400==0){
        return 1;
    }
    return 0;
}

int year_data_sum(int year){
    int data=0;
    for(year--;year>=1900;year--){
        if (is_leap(year)){
            data+=366;
        } else{
            data+=365;
        }
    }
    return data;
}

int month_data_sum(int year,int month){
    if(month<=2){
        if(month==1)
            return 0;
        else
            return 31;
    }else{
        month--;
        int sum=0;
        int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
        int i=0;
        while(month){
            sum+=a[i];
            month--;
            i++;
        }
        if (is_leap(year)){
            return sum+1;
        } else{
            return sum;
        }
    }
}

void print_calendar(int year,int month){
    int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int sum= year_data_sum(year)+ month_data_sum(year,month);
    int week=sum%7;
    printf("==========%d.%2d===========\n",year,month);
    printf(" Mon Tue Wen Thu Fri Sat Sun\n");
    while(week){
        printf("    ");
        week--;
    }
    week=sum%7;
    int i=1;
    for(int data=a[month-1];i<=data;i++){
        printf("%4d",i);
        week++;
        if(week%7==0){
            printf("\n");
        }
    }
    printf("\n============================\n");
}

// 1900.1.1是星期一
int main(){
    for(int i=1;i<=12;i++)
    print_calendar(2023,i);
}