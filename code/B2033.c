#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*题目描述
输入两个正整数 A 和 B，求 A×B 的值。注意乘积的范围和数据类型的选择。

输入格式
一行，包含两个正整数 A 和 B，中间用单个空格隔开。1≤A,B≤50000。

输出格式
一个整数，即 A×B 的值。*/
int main()
{
	long long a, b;//注意b的范围
	scanf("%lld %lld", &a, &b);
	printf("%lld", a * b);
}