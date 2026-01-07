#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*题目描述
读入一个双精度浮点数，分别按输出格式 %f ，%f 保留 5 位小数，%e 和 %g 的形式输出这个数，每次在单独一行上输出。

输入格式
一个双精度浮点数。

输出格式
第一行是按 %f 输出的双精度浮点数；

第二行是按 %f 保留 5 位小数输出的双精度浮点数；

第三行是按 %e 输出的双精度浮点数；

第四行是按 %g 输出的双精度浮点数。*/
int main()
{
	double a;
	scanf("%lf", &a);
	printf("%f\n%.5f\n%e\n%g", a, a, a, a);
}