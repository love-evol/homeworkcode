#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*题目描述
输入一个双精度浮点数，将其向零舍入到整数。说明：向零舍入的含义是，正数向下舍入，负数向上舍入。
输入格式
一个双精度浮点数 x。
输出格式
一个整数，即向零舍入到整数的结果。*/
int main()
{
    double x;
    scanf("%lf", &x);
    printf("%lld", (long long)x);
}