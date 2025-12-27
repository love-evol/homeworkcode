#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*题目描述
给定 3 个整数 a,b,c，计算表达式 (a+b)/c 的值，/ 是整除运算。

输入格式
输入仅一行，包括三个整数 a,b,c，数与数之间以一个空格分开。

输出格式
输出一行，即表达式的值。
*/
int main()
{
	int a, b, c, sum;
	scanf("%d%d%d", &a, &b, &c);
	sum = (a + b) /c;
	printf("%d", sum);
}