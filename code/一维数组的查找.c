#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
/*随机产生100个整数存放于数组中，再从键盘输入一个整数，查找该数是否在数组中，如果存在，则输出第1次存在的位置，如果不存在，则输出“该数不存在”。*/
int main()
{
	int random_num[100], i, target_number;
	for (i = 0; i < 100; i++)
	{
		random_num[i] = rand() % 1000;
	}
	printf("100个随机数为:\n");
	for (i = 0; i < 100; i++)
	{
		printf("%d ", random_num[i]);
	}
	printf("\n请输入要查找的数字：");
	scanf("%d", &target_number);
	for (i = 0; i < 100; i++)
	{
		if (random_num[i] == target_number)
		{
			printf("该数存在，是第：%d个\n", i);
		}
		else
		{
			if (i == 99)
			{
				printf("该数不存在\n");
			}
		}
	}

}