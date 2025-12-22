#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char choice;
	int n;
	do{
	printf("判断是不是3还是4的倍数\n");
	printf("请输入一个整数：\n");
	scanf("%d", &n);
	if (n % 3 == 0)
		printf("这个数是3的倍数\n");
	if (n % 4 == 0)
		printf("这个数是4的倍数\n");
	if (n % 3 != 0 && n % 4 != 0)
		printf("这个数不是3也不是4的倍数");
	printf("是否继续？(y/n): ");
	scanf(" %c", &choice);
} while (choice == 'y' || choice == 'Y');

printf("程序结束.\n");
return 0;
}
