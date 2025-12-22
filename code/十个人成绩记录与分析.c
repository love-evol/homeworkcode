#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	float grade[10],min=0,max=0,total=0;
	int i;
	//输入成绩
	for (i = 1; i <= 10; i++)
	{
		printf("请输入第%d的成绩", i);
		scanf("%f", &grade[i]);
		//算总分
		total += grade[i];
	}
	//最高分
     max = grade[0]; // 假设第一个为最大值
     for (i = 1; i <=10; i++)
	{
      if (grade[i] > max)
	  max = grade[i];
	}
	 //最低分
	 min = grade[0]; // 设第一个为最低值
	 for (i = 1; i <10; i++)
	 {
		 if (grade[i] > min)
			 min = grade[i];
	 }

	// 输出结果
	printf("\n===== 成绩统计结果 =====\n");
	printf("总分: %.2f\n", total);
	printf("平均分: %.2f\n", total / 10);
	printf("最高分: %.2f\n", max);
	printf("最低分: %.2f\n", min);
}
