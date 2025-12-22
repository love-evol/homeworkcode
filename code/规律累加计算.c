#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	/*编写程序求s = a + aa + aaa + aaaa + aa…a的值，其中a是一个数字。

	任务描述：例如2 + 22 + 222 + 2222 + 22222(此时共有5个数相加)，几个数相加由键盘输入。

		任务分析：

		(1) 该题的解题关键是总结表达式中相邻两项的变化规律，aa = a * 10 + a、aaa = aa * 10 + a…，也就是说后一项是前一项乘以10加a。

		(2) 根据前后项的变化规律，总结表达式，以实现累加项的变化。
		*/
	int a, n,total,term;
	a = n = total = term = 0;
	printf("请输入数字a的值：");
	scanf("%d", &a);
	printf("请输入相加的项数n的值：");
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		term = term * 10 + a;
		total += term;
	}
			printf("结果是：%d\n", total);
}