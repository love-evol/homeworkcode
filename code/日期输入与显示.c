#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int year, month, day;
    printf("*****日期输入和显示*****");
    printf("请输入日期（yyyy-mm-dd）：");
	scanf("%d-%d-%d", &year, &month, &day);
    printf("您输入的日期是：%d年%d月%d日\n", year, month, day);
}