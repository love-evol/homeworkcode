#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	//使用泰勒级数展开式来求自然对数的底的近似值，泰勒级数展开式如下：设N=20.则e=1+1/1!+1/2!+1/3!+...+1/N!。编写程序，输入N的值，计算并输出e的近似值。
    for (;;)
    {
        double e = 1.0;
        double factorial = 1.0;
        int N = 0;
        printf("请输入N的值:");
        scanf("%d", &N);
        for (int i = 1; i <= N; i++)
        {
            factorial *= i;
            e += 1.0 / factorial;
        }
        printf("e的近似值为: %.10f\n", e);
        break;
    }

}