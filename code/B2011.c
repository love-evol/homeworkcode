#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h> 
/*题目描述
两个整数 a 和 b 分别作为分子和分母，即分数  a/b，求它的浮点数值（双精度浮点数，保留小数点后 9 位）。
输入格式
输入仅一行，包括两个整数 a 和 b。
输出格式
输出也仅一行，分数a/b的浮点数值（双精度浮点数，保留小数点后 9 位）。*/
int main()
{
	int a,b;
	scanf("%d %d", &a, &b);
	printf("%.9f", (double)a / b);
}