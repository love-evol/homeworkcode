#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	/*请编写一个程序，初始化一个3行4列的二维整数数组，并将所有元素初始化为0，然后输出这个二维数组。*/
	int a[3][4];
	int i, j;
	for (i = 0; i <3; i++)
	{
		for (j = 0; j <4; j++)
		{
			a[i][j] = 0;
			printf("a[%d][%d]=%d ", i, j, a[i][j]);
		}
		printf("\n");
	}
}