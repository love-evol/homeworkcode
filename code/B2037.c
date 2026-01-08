#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*题目描述
给定一个整数，判断该数是奇数还是偶数。如果 n 是奇数，输出 odd；如果 n 是偶数，输出 even。

输入格式
输入仅一行，一个整数 n。

输出格式
输出仅一行，如果 n 是奇数，输出 odd；如果 n 是偶数，输出 even。*/
int main()
{
	int n;
	scanf("%d", &n);
	//判断奇数偶数
    if (n % 2 == 0)  // 如果n除以2的余数为0，则是偶数
    {
        printf("even");
    }
    else  // 否则是奇数
    {
        printf("odd");
    }
}