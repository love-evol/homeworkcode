#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/* 编写程序, 键盘输入一个不多于4位数, 求出它是几位数;
提示:
1) 定义一个数num, 用num / 10逐渐削减其倍数, 直到为num / 10为0;
2) 可以用while循环
*/
int main()
{
	int num, i = 0;
	printf("请输入一个不多于4位的正整数：");
	scanf("%d", &num);
		do {
			i++;
			num = num / 10;
		} while (num != 0);
	printf("这是一个%d位数", i);
}