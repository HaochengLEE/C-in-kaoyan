//
// Created by 李昊城 on 2019/10/18.
//
#include <stdio.h>
#include <string.h>

struct time{
    int hour;
    int minutes;
    int second;
};

struct time timeUpdate(struct time now){
    ++now.second;
}

int main(void){
    //结构数组
    struct time testTimes[]={
            {11,41,13},{11,31,13}
    };
    int i;
    for(i=0;i<2;++i){
        printf("Time is %d %d %d",testTimes[i].hour,testTimes[i].minutes,testTimes[i].second);
        testTimes[i]=timeUpdate(testTimes[i]);

    }

    return 0;
}

