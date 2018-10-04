/*
* @Author: lihaocheng
* @Date:   2018-10-04 23:42:03
* @Last Modified by:   lihaocheng
* @Last Modified time: 2018-10-04 23:48:12
*/
/*2、编写一个程序，将两个变量的值交换, 例如变量a中的值原为 3，b中的值原为8，程序运行后 a 中的值为8，b中的值为3。

*/
#include <stdio.h>
int main(void){
	int a,b,t;
	printf("请输入要交换的数");
	scanf("%d%d",&a,&b);
	t=b;
	b=a;
	a=t;
	printf("a=%d\nb=%d\n",a,b );
	return 0;

}

