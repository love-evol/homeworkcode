#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*
题目描述
等差数列是一个很有趣的数列，它的任何相邻两项的差相等。
现在给出一个等差数列的前两项a1,a2的值，求第 n 项是多少。
输入格式
一行，包含三个整数a1,a2,n（−100≤a1,a2≤100，0<n≤1000。）
输出格式
一个整数，即第 n 项的值.*/
int main()
{
	int a1, a2, n, d, an;
	scanf("%d %d %d", &a1, &a2, &n);
	d = a2 - a1;
	an = a1 + (n - 1) * d;
	printf("%d", an);
}
