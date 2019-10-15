//
// Created by 李昊城 on 2019/9/14.
//

#include <stdio.h>

int main(void){
    int i=8;
    int *p=&i;
    printf("%p\n",&p);
    printf("%d\n",*p);
    printf("%p\n",*p);


    *p=10;
    printf("%d\n",i);
    printf("%p\n",&i);
    printf("%p\n",p);

    printf("%d\n",*p);

    return 0;
}

