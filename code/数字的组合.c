/*编写程序：统计由0....9个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
main()
{
	int i, j, k, count = 0;
	for (i = 1; i <= 9; i++)      //百位
	{
		for (j = 0; j <= 9; j++)  //十位
		{
			for (k = 0; k <= 9; k++) //个位
			{
				if (i != j && i != k && j != k ) //判断各位数字是否相同
				{
					printf("%d%d%d     \t", i, j, k);
					count++;
				}
			}
		}
	}
	printf("\n共有%d个互不相同且无重复数字的三位数。", count);
}