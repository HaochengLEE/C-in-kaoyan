//
// Created by 李昊城 on 2019/9/14.
//
#include <stdio.h>
void mess(int a[],int len,int *min, int *max){
    *max=*min=a[0];
    printf("sizeof(a)=%d\n", sizeof(a));
    printf("%s","//这里的8表示，int所占的字节数");
    for(int i=1;i<len;i++){
        if(*min>a[i]){
            *min=a[i];
        }
        if(*max<a[i])*max=a[i];
    }
    printf("%d\n",*max);
    printf("%d\n",max[0]);

}
int main(void){
    int a[]={1,2,3,4,5,6,7,8,9,0,100};
    int min,max;

    mess(a, sizeof(a)/ sizeof(a[0]),&min,&max);
    printf("%d\n",sizeof(a)/ sizeof(a[0]));
    printf("%d\n",sizeof(a));
    printf("min=%d\n",min);
    printf("max=%d\n",max);



}
