#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    char chLicence;
    printf("请输入你的驾照类型: ");
    scanf(" %c", &chLicence);
    switch (chLicence)
    {
    case 'a':
    case 'A':
        printf("你可以驾驶大客车、");
    case 'b':
    case 'B':
        printf("货车和小轿车!\n");
        break;
    case 'c':
    case 'C':
        printf("你可以驾驶小轿车!\n");
        break;
    case 'd':
    case 'D':
        printf("你只能驾驶摩托车!\n");
        break;
    default:
        printf("你的驾照类型有误!\n");
        break;
    }
}