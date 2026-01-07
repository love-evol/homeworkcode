#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <math.h> 
/*题目描述
计算两个双精度浮点数 a 和 b 的相除的余数，a 和 b 都是双精度浮点数。这里余数（r）的定义是：a=k×b+r，其中 k 是整数，0≤r<b。
输入格式
输入仅一行，包括两个双精度浮点数 a 和 b。
输出格式
输出也仅一行，a/b 的余数。
选手输出与标准答案的绝对误差或相对误差不超过 10的负五次方即视为正确。
对于 100% 的数据，保证 1≤a≤10六次方，1≤b≤10三次方，a>b。*/
int main()
{
    double a, b, r;
    scanf("%lf %lf", &a, &b);
    double k = floor(a / b);  // 向下取整得到整数k
    r = a - k * b;            // 计算余数
    printf("%lf", r);  // 输出余数
}
