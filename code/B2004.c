#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*读入三个整数，按每个整数占 8 个字符的宽度，右对齐输出它们，按照格式要求依次输出三个整数，之间以一个空格分开。*/
int main()
{

	long long int a, b, c;
	scanf("%lld %lld %lld", &a, &b, &c);
	printf("%8lld %8lld %8lld", a, b, c);
}