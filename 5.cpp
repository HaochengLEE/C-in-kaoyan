/*
* @Author: lihaocheng
* @Date:   2018-10-05 09:43:40
* @Last Modified by:   lihaocheng
* @Last Modified time: 2018-10-05 22:35:15
*/
/*计算s,并输出
             1        1                 1
    S = 1 + ── + ─── + …… + ──────
            1+2　　 1+2+3       　　1+2+3+…+n
n通过键盘输入，例如：若n的值为11时，则函数值为：1.833333
*/
#include <stdio.h>
float fun(int n){
    int i,j;
    float count=0;
    for(i=1;i<=n;i++){
        int sum=0;
        for(j=i;j>=0;j--){
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
    printf("result is %.6f\n",b );
    return 0;

}