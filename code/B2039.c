#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*题目描述
输入两个整数，比较它们的大小。若 x>y ，输出 > ；若 x=y ，输出 = ；若 x<y，输出 < 。
输入格式
一行，包含两个整数 x 和 y ，中间用单个空格隔开。 0≤x<2^32,−2^31≤y<2^31。
输出格式
一个字符。若 x>y，输出 > ；若 x=y ，输出 = ；若 x<y ，输出 < ；*/
int main()
{
	long long x, y;
	scanf("%lld %lld", &x, &y);
	//判断关系
	if (x == y)
	{
		printf("=");
	}
	else
	{
		if (x > y)
		{
			printf(">"); 
		}
		else
		{
			if (x < y)
			{
				printf("<");
			}
		}
	}
}