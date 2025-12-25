#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>  // 字符串处理函数头文件
int main()
{
    /*编写找最大字符串程序
    任务描述：编写程序从键盘上不断输入字符串，直到输入空串，将其中最大的字符串打印出来。
    任务分析：
    ① 定义两个字符数组，一个用于输入字符串s，另一个用于存放当前最大的字符串max（初始化值为空串)。
    ② 构造循环：提示并输入字符串s，同空串比较，如果是空串，则结束循环。
    ③ 如果不为空串，则s同max比较，前者大，则存入max中。
    ④ 转到操作②。*/
    char s[100];
    char max[100] = "";
    int first = 1; 
    while (1) {
        printf("请输入字符串(空串结束): ");
        gets(s);
        if (strlen(s) == 0) {
            printf("输入结束\n");
            break;
        }
        if (first) {
            strcpy(max, s);
            first = 0;
        }
        else {
            if (strcmp(s, max) > 0)
            {
                strcpy(max, s);
            }
        }
    }
    if (!first) 
    {
        printf("\n最大字符串是: %s\n", max);
    }
    else
    {
        printf("\n没有输入任何字符串\n");
    }
}