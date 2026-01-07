#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*题目描述
读入一个单精度浮点数，保留 3 位小数输出这个浮点数。

提示：无需考虑浮点误差。

输入格式
只有一行，一个单精度浮点数。

输出格式
也只有一行，读入的单精度浮点数。*/
int main()
{
	float i;
	scanf("%f", &i);
	printf("%.3f", i);
}