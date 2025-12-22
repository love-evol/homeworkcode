#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char choice;
	char n;
	do{
	printf("请输入一个字符：\n");
	scanf("%c", &n);
	if (n >= 'A' && n <= 'Z')
		printf("这个字符是大写字母\n");
	else if (n >= 'a' && n <= 'z')
		printf("这个字符是小写字母\n");
	else
		printf("这个字符不是字母\n");	
} while ( choice == 'y' || choice == 'Y');

printf("程序结束.\n");
return 0;
}