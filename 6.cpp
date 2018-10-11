//
// Created by 李昊城 on 2018/10/11.
//
#include <stdio.h>
float fun(int n){
    int i,j;
    float count=0;
    for(i=1;i<=n;i++){
        int sum=1;
        for(j=i+1;j>=0;j--){
            sum+=j;
        }
        count+=1.0/sum;


    }
    return count;
}
int main(){
    int a;
    float b;
    scanf("%d",&a);
    b=fun(a);
    printf("result is %.1f\n",b );
    return 0;

}

