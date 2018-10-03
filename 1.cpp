/*
* @Author: lihaocheng
* @Date:   2018-10-03 23:51:11
* @Last Modified by:   lihaocheng
* @Last Modified time: 2018-10-04 00:03:53
*/
/*
定义一个函数int fun(int a,int b,int c)，它的功能是：若a,b,c能构成等边三角形函数返回3，若能构成等腰三角形函数返回2，若能构成一般三角形函数返回1，若不能构成三角形函数返回0。
#include <stdio.h>
*/
#include <stdio.h>
int fun(int a,int b,int c){
	if(a+b>c){
		if(a==b==c){
			return 3;
		}
		if(a==b||b==c||a==c){
			return 2;
		}
		return 1;
	}
	return 0;

	
}
int main(void){
	int a,b,c;
	printf("请输入三角形的三条边长\n");

	scanf("%d%d%d",&a,&b,&c);
	int k=fun(a,b,c);
	printf("%d\n", k);

	return 0;
}
