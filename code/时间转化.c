#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int seconds, minutes, hours, days;
	printf("请输入时间的秒数：");
	scanf("%d", &seconds);
	days = seconds / 86400;		 //1天=86400秒
	seconds = seconds % 86400;
	hours = seconds / 3600;		//1小时=3600秒
	seconds = seconds % 3600;
	minutes = seconds / 60;		//1分钟=60秒
	seconds = seconds % 60;
	printf("转换后的时间是：%d天 %d小时 %d分钟 %d秒\n", days, hours, minutes, seconds);
}