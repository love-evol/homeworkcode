#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main()
{
	float R, S;
	printf("****计算圆内接六边形的面积*****\n");
	printf("请输入圆的面积:");
	scanf("%f", &R);
	S = (3 * sqrt(3) / 2) * R * R;
	printf("圆内接六边形面积是:%.2f\n", S);
}