/*
* @Author: lihaocheng
* @Date:   2018-10-05 09:33:52
* @Last Modified by:   lihaocheng
* @Last Modified time: 2018-10-05 09:40:41
*/
/*4.编写函数fun(int n)，它的功能是：计算正整数n的所有因子（1和n除外）之和作为函数值返回。例如：n=120时，函数值为239。
*/
#include <stdio.h>
int fun(int n);
int main(void){
	int a,b;
	scanf("%d",&a);
	b=fun(a);
	printf("%d\n",b );
	return 0;

}
int fun(int n){
	int i,count=0;
	for(i=n-1;i>1;i--){
		if(n%i==0){
			count+=i;

		}

	}
	return count;
}
