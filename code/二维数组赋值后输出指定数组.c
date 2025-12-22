#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
main()
{
	/*给定一个二维数组a,有2行3列，分别初始化值为1,2,3,4,5,6；编写程序输出数组中第1行第2列的元素（注意：数组下标从0开始）。*/
	int a[2][3];
	int i, j;
	int n = 1;
	for(i = 0; i < 2; i++)
	{
		for(j=0;j<3;j++)
		{
			a[i][j] =n;
			n++;
		}
	}
	printf("a{2][3]=%d", a[0][1]);
}