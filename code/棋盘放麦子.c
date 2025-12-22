#include<stdio.h>
int main()
{
	printf("相传古代印度国王舍罕要褒奖他的聪明能干的宰相达依尔（国际象棋发明者），问他需要什么?\n");
	printf("达依尔回答说：“国王只要在国际象棋的棋盘上第一个格子放一粒麦子，第二个格子放上二粒，第三个格子放四粒，以此类推，每一格的麦子数是前一格的两倍，一直放到64格，我就感恩不尽了”。\n");
	printf("国王答应了，结果全印度的粮食用完还不够。国王很纳闷，怎么也算不清这笔账。\n");
	unsigned long long num=1,total=0; //long函数最多存放32/64位（与系统位数有关），long long可以存放128位，unsigned long long能存放更大数字
	int i;
	for (i = 1; i <= 64; i++)
	{
		printf("第%d格子放了%llu粒麦子\n", i, num);
		num *= 2;
		total += num;
	}
		printf("总共放了%llu粒麦子\n",total);
}