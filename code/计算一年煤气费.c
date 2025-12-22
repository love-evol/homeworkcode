#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	float gas[12], total = 0;
	int i,month=0;
	//输入煤气费
	for (i = 1; i <= 12; i++)
	{
		printf("请输入第%d的煤气费用", i);
		scanf("%f", &gas[i]);
		
		//算总分
		total += gas[i];

		//计每月超过100的次数
	  if (gas[i] >= 100)
			month += 1;
	}
	//输出总的煤气费
	printf("本年煤气费用为%0.2f\n其中每月煤气费超过100的有%d个月", total,month);
}