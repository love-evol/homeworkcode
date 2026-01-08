#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
/*题目描述
给定非负整数 n，求2 的 n 次方值。
输入格式
一个整数 n。0≤n<31。
输出格式
一个整数，即 2 的 n 次方。
请注意，如果您正在使用 cout 进行输出，您需要关注被输出的数据的类型。输出格式不符合预期可能会造成答案错误。
常用函数的返回值类型可以在 cppreference.com 和 cplusplus.com 查询到。例如，您可以在这两个网站中查到 pow 函数的返回值是 float 或 double。
您可以使用显式或隐式的类型转换，来变换数据类型。*/
int main()
{
	int n;
	scanf("%d", &n);
	printf("%d", (int)pow(2, n));
}