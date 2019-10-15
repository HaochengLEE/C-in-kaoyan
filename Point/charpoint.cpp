//
// Created by 李昊城 on 2019/9/19.
//

#include <stdio.h>

int main(){
    char ac[]={1,2,34,6,7,3,23};
    char *p=ac;
    *p++;
    printf("p=%p\n",p);
    printf("p+1=%p\n",p+1);//sizeof(char)=1
    printf("*(p+1)=%d\n",*(p+1));

    int sum[]={2,23,34};
    int *q=sum;
    *q++;
    printf("q=%p\n",q);
    printf("q+1=%p\n",q+1);//sizeof(int)=4
    printf("*(q+1)=%d\n",*(q+1));
    return 0;
}