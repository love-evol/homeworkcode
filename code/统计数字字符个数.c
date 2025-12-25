#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	/*‌描述‌：输入一行字符串，统计其中数字字符的个数。

‌输入‌：一行字符串，总长度不超过255。

‌输出‌：输出字符串中数字字符的个数。

‌样例输入‌：Peking University is set up at 1898.

‌样例输出‌：4*/
	char str[256];//定义一个字符数组用于存储输入的字符串结束语\n\也算一个字符
	int i, count = 0;
	printf("请输入一行字符串：");
	gets(str);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			count++;
		}
	}
	printf("字符串中数字字符的个数为：%d\n", count);
	return 0;
}