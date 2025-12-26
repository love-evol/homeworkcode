#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
/*编写程序，输入一个数，假定该数是X，要求按原来的规律将X插入到一个已经排好序的数组中。
分析：首先判断此数是否大于最后一个数，如果此数大于最后一个数，则直接将此数放在原数组的最后位置。
否则应该将数插入到中间位置的情况。
如果将数插入中间位置：通过循环从前到后依次查找位置，如果找到要插入的位置，则通过循环将数组的最后一个数到要插入位置的元素往后移。
后移后将该数放入要插入的位置，结束。*/
int main()
{
	int random_num[101],i,j,target_number,temp;
		for (i = 0; i < 100; i++)
		{
			random_num[i] = rand() % 1000;
		}
	printf("100个随机数为:\n");
	for (i = 0; i < 100; i++)
	{
		printf("%d ", random_num[i]);
	}
	//排序
	for (i = 0; i < 99; i++)
	{
		for (j = 0; j < 99 - i; j++)
		{
			if (random_num[j] > random_num[j + 1])
			{
				temp = random_num[j];
				random_num[j] = random_num[j + 1];
				random_num[j + 1] = temp;
			}
		}
	}

	printf("\n排序后的结果为:\n");
	for (i = 0; i < 100; i++)
	{
		printf("%d ", random_num[i]);
	}
	printf("\n请输入要插入的数字：");
	scanf("%d",&target_number);
		for (i = 0; i < 100; i++)
		{
			if (random_num[i] > target_number)
			{
				for (int j = 99; j >= i; j--)
				{
					random_num[j + 1] = random_num[j];
				}
				random_num[i] = target_number;
				break;
			}
			else
			{
				if (i == 99)
				{
					random_num[100] = target_number;
				}
			}
		}
		printf("插入数字后的结果为:\n");
		for (i = 0; i < 101; i++)
		{
			printf("%d ", random_num[i]);
		}
}