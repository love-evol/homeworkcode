#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n, sum;
	n = 1;
	sum = 0;
	while(sum+n*n<1000)
	{
		sum=sum +  n*n;
		printf("当n为%d时sun=%d\n", n, sum);
		n++;
	}
	printf("所以n的最大值是%d", n-1);
}