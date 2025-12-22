#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
main()
{
	char choice;
	int year;
	do
	{
		printf("请输入需要判读的年：");
		scanf("%d", &year);
		if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
			printf("这是闰年\n");
			else
					printf("这不是闰年。\n");
		printf("是否继续？(y/n): ");
		scanf(" %c", &choice);
		getchar();
	} while (choice == 'y' || choice == 'Y');
}