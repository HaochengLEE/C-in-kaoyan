//
// Created by 李昊城 on 2019/10/15.
//
#include <stdio.h>
//定义结构
struct date{
    int month;
    int year;
    int day;
};
//无名结构
struct {
    char name;
    int age;
}Peter,Nic;
int main(void){


    //结构的赋值
    struct date daliy1={07,20,30};
    //未赋值的day是0
    struct date daliy2={.month=07,.year=20};

    struct date test=daliy2;
    struct date today;
    today.day=1;
    today.year=1010;
    today.month=4;

    return 0;
}
