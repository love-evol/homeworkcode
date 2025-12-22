#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int isprime(int n,int i)
{
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)   //能被i整除，n为非素数
            break;
    }
    return i;
}
int main()
{
    int n, i;
    n = i = 0;
    printf("请输入一个整数：");
    scanf("%d", &n);
    i=isprime(n,i);
    if (i == n)
        printf("%d是素数！\n", n);
    else
        printf("%d不是素数！\n", n);
}
