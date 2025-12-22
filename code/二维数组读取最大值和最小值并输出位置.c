#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
main()
{
	/*编写程序，使用随机函数产生48个整数，分成6行8列存放在二维数组s中，
	找出最大数与最小数，及它们数的位置，并以矩阵方式输出二维数组中各元素值。*/
	/*分析： 

①　定义一个6行8列的数组存放数据；

②　定义一个变量max=0存放最大值，以及位置变量maxi,maxj；

③　定义一个变量min=0存放最大值，以及位置变量mini,minj；

④　使用双重循环将随机函数产生的整数存放在二维数组中。

⑤　将二维数组的每个元素分别和max与min比较，如果比max大则存入max中，并记录位置；如果比min小则存入min中，并记录位置。重复执行*/
	int s[6][8];
	int max, min, maxi, mxnj,mini,minj;
	int i, j;
	max = 0;
	min = 1001;
	srand((unsigned)time(NULL));
	for (i = 0; i < 6; i++)
	{
		for (j = 0; j < 8; j++)
		{
			s[i][j] = rand() % 1000;
			printf("%4d", s[i][j]);
			if(s[i][j]>max)
			{
				max = s[i][j];
				maxi = i;
				mxnj = j;
			}
			if(s[i][j]<min)

				{
				min = s[i][j];
				mini = i;
				minj = j;
			}
		}
	}
	printf("\n最大值为：%d,位置为：(%d,%d)\n", max, maxi, mxnj);
	printf("最小值为：%d,位置为：(%d,%d)\n", min, mini, minj);
}