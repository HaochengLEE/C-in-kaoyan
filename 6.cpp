//
// Created by 李昊城 on 2018/10/11.
// 将一个整数中的每一位上为奇数的数依次取出，构成一个新数放在t中。高位仍在高位，低位仍在低位。例如，当s中的数为：87653142时，t中的数为：7531。
//
#include <stdio.h>
#include <math.h>
int main(){
    int a=87653142;
//    scanf("%d",&a);
    int t=0,k=0;

    while (a!=0){

        if(a%10%2!=0){
            t+=a%10*pow(10,k);
            k++;


        }
        a=a/10;
    }


    printf("result is %d\n",t);
    return 0;

}

