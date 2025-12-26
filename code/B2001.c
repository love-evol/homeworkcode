#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*求两个整数的和。*/
/*对于 100% 的数据，输入的整数在 [1,4×10*18] 内。*/
int  main()
{
	long long a, b;
	printf("请输入两个整数:");
	scanf("%lld%lld", &a, &b);
	printf("%lld\n", a+b);
}