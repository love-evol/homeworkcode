#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	/*回文串是指这个字符串从左到右及从右到左的字母排列是一样的，
		例如"pop"，"legel"等。可以设计一个从左到右的下标i（i = 0，1，2…）
		同时设计一个从右到左的下标j（j = strlen(s) - 1，strlen(s) - 2，…）
		每次比较s[i]和s[j]，如s[i] == s[j]，则++i，--j
		再比较下一对，如s[i] != s[j]，则s肯定不是回文
		如对所有的i < j，都有s[i] == s[j]，则s是回文
	*/
	char s[100];
	int i, j, palindrome;
	i = 0;
	j = strlen(s) - 1;
	palindrome = 1;
	printf("请输入一个字符串: ");
	gets(s);
	while (i < j)
	{
		if (s[i] != s[j])
		{
			palindrome = 0;
			break;
		}
		i++;
		j--;
	}
	if (palindrome)
		printf("字符串是回文\n");
	else
		printf("字符串不是回文\n");
}