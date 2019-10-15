//
// Created by 李昊城 on 2019/9/14.
//

#include <stdio.h>
void exchang(int *a, int *b);

int main(void){
    int a=8;
    int b=9;

    exchang(&a,&b);
    printf("%d%d",a,b);

    return 0;
}

void exchang(int *a, int *b){
    int t=*b;
    *b=*a;
    *a=t;

}