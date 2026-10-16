# define _CRT_SECURE_NO_WARNINGS
# include<stdio.h>
# include<stdlib.h>
int main()
{
	for (int i = 100; i <= 999; i++)
	{
		int g = i % 10;
		int s = (i / 10) % 10;
		int b = (i / 10 / 10) % 10;
		if (g * g * g + s * s * s + b * b * b == i)
		{
			printf("%d\n", i);
		}
	}
	return 0;
}