#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char choice;
	char ch;
	do
	{
		printf("请输入一个字符：");
		scanf("%c", &ch);
		printf("字符'%c'的ASCII码值是：%d\n", ch, (int)ch);
		if ((int)ch < 32)
			printf("该字符是一个控制字符。\n");
		else
			if (48 <= (int)ch <= 57)
				printf("该字符是一个数字字符。\n");
			else
				if (65 <= (int)ch <= 90)
					printf("该字符是一个大写字母字符。\n");
				else
					if (97 <= (int)ch <= 122)
						printf("该字符是一个小写字母字符。\n");
					else
						printf("该字符是其他字符。\n");
		printf("是否继续？(y/n): ");
		scanf(" %c", &choice);
		getchar();
	} while (choice == 'y' || choice == 'Y');
}