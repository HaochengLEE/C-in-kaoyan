//
// Created by 李昊城 on 2019/9/19.
//

#include <stdio.h>

void protect(const int a[]){
    //这里使用const关键字可以让传入但数组不被修改

}

void nonprotect(int a[]){
    a[0]=15;

}
int main(){
    int i[]={24,36};
    int a=18;
    int * const q=i;
    int * const p=&a;
    //使用const关键字之后，不能通过q和p去做修改。可以通过i和a修改。
    printf("%d\n",*q);
    printf("%d\n",a);
    //这里没有使用const关键字所以i[0]的值被修改李
    nonprotect(i);
    printf("i[0]=%d\n",i[0]);

    a=36;
    printf("%d\n",a);
    return 0;
}
