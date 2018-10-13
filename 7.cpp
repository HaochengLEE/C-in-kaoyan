//
// Created by 李昊城 on 2018/10/13.
// 7、计算并输出k以内最大的10个能被13或17整除的自然数之和。k的值从键盘传入，若k的值为500，则输出4622。
//
#include <stdio.h>
#include <math.h>
int main(){
    int k;
    scanf("%d",&k);
    int t=0,count=0;
    while(k>0&&count<10){
        if(k%13==0||k%17==0){
            t+=k;
            count++;
        }
        k--;
    }
    printf("%d\n",t);

    return 0;

}