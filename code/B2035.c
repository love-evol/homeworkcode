#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*题目描述
给定一个整数 N，判断其正负。如果 N>0, 输出 positive ; 如果 N=0, 输出 zero ; 如果 N<0, 输出 negative。

输入格式
一个整数 N(−10^9≤N≤10^9)。

输出格式
如果 N>0， 输出 positive;

如果 N=0, 输出 zero；

如果 N<0， 输出 negative。*/
int main()
{
	long long n;
	scanf("%lld", &n);
	if (n > 0)
	{
		printf("positive");
	}
	else
	{
		if (n == 0)
		{
			printf("zero");
		}
		else
		{
			if (n < 0)
			{
				printf("negative");
			}
			else
			{
				printf("erro");
			}
		}
	}
}
