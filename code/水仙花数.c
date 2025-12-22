#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	//编写程序，打印出所有的“水仙花数”，所谓“水仙花数”是指一个三位数，其各位数字立方和等于该数本身。例如：153是一个“水仙花数”，因为153=13＋53＋33。程序运行结果：
	//分析：利用for循环控制100 - 999个数，每个数分解出个位，十位，百位。如果满足水仙花数条件，则输出。
	int i, bai, shi, ge;
	printf("所有的水仙花数有：\n");
	for (i = 100; i <= 999; i++)
	{
		bai = i / 100;          //百位
		shi = (i / 10) % 10;    //十位
		ge = i % 10;            //个位
		if (i == bai * bai * bai + shi * shi * shi + ge * ge * ge)
			printf("%d\n", i);
	}
}