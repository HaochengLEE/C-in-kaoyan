//
// Created by 李昊城 on 2018/10/15.
// 知一个数列的前三项分别为0，0，1， 以后的各项都是其相邻的前三项之和,计算并输出该数列前n项的平方根之和sum。例如，当n＝10时，程序的输出结果应为：23.197745。
//
#include <stdio.h>
#include <math.h>
int main(){
    int n;
    scanf("%d",&n);
    float count=1;
    int a[20];
    a[0]=0;
    a[1]=0;
    a[2]=1;
    if(n<2){
        printf("0");
    }
    if(n==2){
        printf("1");
    } else{
        printf("%d\n",a[2]);
        for(int k=3;k<n;k++){
            a[k]=a[k-1]+a[k-2]+a[k-3];
            count+=sqrt(a[k]);
        }
        printf("%f",count);

    }

    return 0;
}