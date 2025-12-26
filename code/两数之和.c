#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*给定一个整数数组 nums 和一个整数目标值 target，请你在该数组中找出 和为目标值 target  的那 两个 整数，并返回它们的数组下标。*/
int main()
{
	int nums[10], target, temp, n, i, find=0;
	printf("请输入nums的数组:");
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &nums[i]);
	}
	printf("请输入target值:");
	scanf("%d",&target);
	for (i = 0; i < 10; i++)
	{
		for (n = 0; n < 10; n++)
		{
			temp = nums[i] + nums[n];
			if (temp == target)
			{
				printf("[%d][%d]\n", i, n);
				find = 1;
			}
		}
	}
	if (find == 0)
	{
		printf("找不到");
	}
}