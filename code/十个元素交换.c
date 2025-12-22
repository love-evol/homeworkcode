#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	/*从键盘上输入10个整数，存放在一个一维数组中，然后将其前5个元素与后5个元素对换，
	即：第1个元素和第10个元素互换，第二个元素和第9个元素互换……分别输出数组原来的值和对换后各元素的值*/
	int s[10], i,temp;
	printf("请输入10个整数：\n");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &s[i]);
	}
	temp = s[10];
	for (i = 0; i < 5; i++)
	{
		temp = s[i];
		s[i] = s[9 - i];
		s[9 - i] = temp;
	}
	printf("交换后的数组是:");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", s[i]);
	}
}
