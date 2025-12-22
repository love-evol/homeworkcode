#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
main()
{
	/*编写一个程序，遍历一个4行5列的二维整数数组，并计算所有元素的和，最后输出这个和。*/
	int a[4][5];
	int i, j;
	int sum = 0;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("请输入第%d行第%d列的元素：", i+1, j+1);
			scanf("%d", &a[i][j]);
			sum += a[i][j];
		}
	}
	printf("二维数组所有元素的和为：%d", sum);
}