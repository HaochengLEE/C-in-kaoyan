/*
* @Author: lihaocheng
* @Date:   2018-10-04 23:48:25
* @Last Modified by:   lihaocheng
* @Last Modified time: 2018-10-05 00:04:23
*/
/*
3、从键盘输入3个数，将最大值放在变量a中，最小值放在变量c中。
   例如，输入的数为：55   12   34，
输出结果应当是：a=55.0,b=34.0,c=12.0。

*/
#include <stdio.h>
int main(void){
	float a,b,c;
	
	printf("请输入要排序的数");
	scanf("%f%f%f",&a,&b,&c);
	if(b>=c){
		if(a>=b){
			printf("%.1f\n%.1f\n%.1f\n",a,b,c );
		}
		else{
			int t;
			t=b;
			b=a;
			a=t;
			printf("%.1f\n%.1f\n%.1f\n",a,b,c );
		}



	}
	else{
		int k;
		k=b;
		b=c;
		c=k;
		if(a>=b){
			printf("%.1f\n%.1f\n%.1f\n",a,b,c );
		}
		else{
			int t;
			t=b;
			b=a;
			a=t;
			printf("%.1f\n%.1f\n%.1f\n",a,b,c );
		}

	}
	return 0;
}