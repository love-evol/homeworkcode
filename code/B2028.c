#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*题目描述
将一个三位数反向输出，例如输入 358，反向输出 853。
输入格式
一个三位数 n。
输出格式
反向输出 n。*/
int main()
{
	int start;
	int a[3];
	scanf("%d", &start);
	a[0] = start % 10;
	a[1] = start / 10 % 10;
	a[2] = start / 100 % 10;
	for (int i = 0; i <3; i++)
	{
		printf("%d", a[i]);
	}
}