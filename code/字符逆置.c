#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	/*编写字符中逆置程序
所谓逆置即是将字符串置换成反向序列，也就是将字符数组中除\0之外的所有的元素按下标进行反转。
例如：ABCDEFGHIJK逆置后的结果为KJIHGFEDCBA。
任务分析:
逆置算法：将s[0]的值与s[n-1]交换，s[1]的值与s[n-2]进行交换……。
如果要对有n个元素的字符串进行逆置，则最多经过n/2次交换就可完成。
数据分析：定义一个符号常量MAX表示字符串的最大长度；
定义一个字符数组s用于存放一个字符串，长度为MAX；定义一个字符变量t作为临时变量，用于交换两个字符；
定义两个整型变量n和i分别表示字符串的实际长度和循环变量。*/
#define MAX 100
	char s[MAX];
	char t;
	int n, i;
	printf("请输入一个字符串：");
	gets(s);
	for (n = 0; s[n] != '\0'; n++);
	for (i = 0; i < n / 2; i++)
	{
		t = s[i];
		s[i] = s[n - 1 - i];
		s[n - 1 - i] = t;
	}
	printf("逆置后的字符串为：%s\n", s);
	return 0;
}