#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a[10], b[10], c[10];
	printf("请输入数组1的数据：\n");
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("请输入数组2的数据：\n");
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &b[i]);
	}
	printf("两个数组对应元素之和为：\n");
	for (int i = 0; i < 10; i++)
	{
		c[i] = a[i] + b[i];
		printf("%d ", c[i]);
	}
}