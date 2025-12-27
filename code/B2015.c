#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*对于阻值为r1和r2的电阻，其并联电阻阻值公式计算如下：
R=1/(1/r1+1/r2)
输入实数r1,r2。
输出并联之后的阻抗大小，结果保留小数点后 2 位。
输入格式
两个实数 r1,r2,以一个空格分开。
输出格式
并联之后的阻抗大小，保留小数点后 2 位。
*/ 
int main()
{
	double r1, r2;
	scanf("%lf %lf", &r1, &r2);
	printf("%.2lf", (1/(1/r1+1/r2)));
}