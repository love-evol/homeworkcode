#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*题目描述
输入一个 ASCII 码，输出对应的字符。

输入格式
一个整数，即字符的 ASCII 码，保证存在对应的可见字符。

输出格式
一行，包含相应的字符。*/
int main()
{
	int ch;
	scanf("%d", &ch);
	printf("%c", (char)ch);
}