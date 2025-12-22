#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() 
{
    char choice;
    do
    {
    int number;
    printf("请输入一个1~7的数字: ");
    scanf("%d", &number);
    printf("以%d开头的成语: ", number);

    switch (number) {
    case 1:
        printf("一帆风顺\n");
        break;
    case 2:
        printf("二龙戏珠\n");
        break;
    case 3:
        printf("三阳开泰\n");
        break;
    case 4:
        printf("四季平安\n");
        break;
    case 5:
        printf("五谷丰登\n");
        break;
    case 6:
        printf("六六大顺\n");
        break;
    case 7:
        printf("七星高照\n");
        break;
    default:
        printf("输入错误！请输入1~7之间的数字。\n");
        break;
    }
        printf("是否继续？(y/n): ");
        scanf(" %c", &choice);
        getchar();
    } while (choice == 'y' || choice == 'Y');
    }