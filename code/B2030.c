#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <math.h>
/*题目描述
已知线段的两个端点的坐标 A(Xa,Ya)，B(Xb ,Yb) ，求线段 AB 的长度。
输入格式
共两行。
第一行是两个实数 Xa，Ya，即 A 的坐标。
第二行是两个实数 Xb，Yb，即 B 的坐标。
输入中所有实数的绝对值均不超过 10000。
输出格式
一个实数，即线段 AB 的长度，保留到小数点后 3 位。*/
int main()
{
    double X1, Y1, X2, Y2;
    scanf("%lf%lf", &X1, &Y1);
    scanf("%lf%lf", &X2, &Y2);
    printf("%.3f\n", sqrt((X1 - X2) * (X1 - X2) + (Y1 - Y2) * (Y1 - Y2)));
}