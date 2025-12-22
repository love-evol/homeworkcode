#include<stdio.h>

main()
{
	int i = 5;
	do
	{
		switch (i % 2)
		{
		case 4:i--; break;
		case 6:i--; continue;
		}
		i--;
		i--;
		printf("%d ", i);
	} while (i > 0);
}