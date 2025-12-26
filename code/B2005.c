#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*给定一个字符，用它构造一个底边长 5 个字符，高 3 个字符的等腰字符三角形。*/
int main()
{
    char c;
    scanf("%c", &c);
    int n, j;
    for (n = 1; n <= 3; n++)
    {
        // 打印每行前面的空格
        for (j = 1; j <= 3 - n; j++)
        {
            printf(" ");
        }
        // 打印字符
        for (j = 1; j <= 2 * n - 1; j++)
        {
            printf("%c", c);
        }
        // 换行
        printf("\n");
    }
}