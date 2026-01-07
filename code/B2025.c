#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>
/*题目描述
用 * 构造一个对角线长 5 个字符，倾斜放置的菱形。

输入格式
没有输入要求。

输出格式
如样例所示。用 * 构成的菱形。*/
int main()
{
	for (int i = 1; i <= 5; i++)
	{
		int spaces = abs(i - 3);  // 计算空格数
		// 打印空格
		for (int j = 0; j < spaces; j++)
		{
			printf(" ");
		}
		// 打印星号
		for (int j = 0; j < 5 - 2 * spaces; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}