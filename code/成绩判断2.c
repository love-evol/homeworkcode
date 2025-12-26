#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char choice;
	int grade;
	do
	{
		printf("请输入需你的成绩：");
		scanf("%d", &grade);
		if (0 < grade && grade > 100)
		{
			printf("输入成绩有误");
			break;
		}
		if (grade >= 60)
			printf("恭喜你及格了\n");
		else
			printf("你要加油学习了！！！\n");
		printf("是否继续？(y/n): ");
		scanf(" %c", &choice);
		getchar();
	} while (choice == 'y' || choice == 'Y');
}