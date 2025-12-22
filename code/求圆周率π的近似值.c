#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	/*使用公式π/4=1-1/3+1/5-1/7+…，求圆周率π的近似值，直到最后一项的绝对值小于10-4为止*/
	double y=0;
	int i=1;
	int sign = 1; //符号
	while (1.0 /i >= 0.0001)
	{
		y +=(1.0 /i)* sign;
		sign = -sign;
		i += 2;
	}
	printf("圆周率π的近似值为：%.5f\n", y*4);

}