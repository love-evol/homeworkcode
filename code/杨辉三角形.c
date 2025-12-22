#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	/*从杨辉三角形可以看出，杨辉三角形的规律是：
	第1列的元素值为1，主对角线上的元素值为1，其它元素的值都是其前一行的前一列与前一行的同一列的值相加。*/
	int a[10][10];
	int i, j;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= i; j++)
		{
			if (j == 0 || j == i)
				a[i][j] = 1;
			else
				a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
			printf("%4d", a[i][j]);
		}
		printf("\n");
	}

}