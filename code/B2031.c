#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <math.h>
/*题目描述
平面上有一个三角形，它的三个顶点坐标分别为 (x1​,y1​),(x2,y2),(x3,y3)，那么请问这个三角形的面积是多少。
输入格式
输入仅一行，包括 6 个双精度浮点数，分别对应 x1,y1,x2,y2,x3,y3。坐标的绝对值不超过 100，且小数点后最多只有一位。
输出格式
输出也是一行，输出三角形的面积，精确到小数点后两位。*/
int main()
{
	double s;
	double x[4], y[4];
	int i;
	for (i = 1; i < 4; i++)
	{
		scanf("%lf %lf", &x[i], &y[i]);
	}
	s = 1.0 / 2.0 * (fabs(x[1] * (y[2] - y[3]) + x[2]*(y[3] - y[1]) + x[3] * (y[1] - y[2])));
	printf("%.2lf", s);
}