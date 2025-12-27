#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*题目描述
将一个整型变量的值赋给一个布尔型变量，再将这个布尔型变量的值赋给一个整型变量，得到的值是多少？

输入格式
一个整型范围内的整数，即初始时整型变量的值。

输出格式
一个整数，经过上述过程后得到的结果。*/
int main()
{
        int n;
        scanf("%d", &n);
        // 整型转布尔型：非0转为true(1)，0转为false(0)
        // 布尔型转整型：true转为1，false转为0
        printf("%d", n != 0);
}