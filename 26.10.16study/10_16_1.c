# define _CRT_SECURE_NO_WARNINGS
# include<stdio.h>
# include<stdlib.h>
int main()
{
    for (int i = 101; i <= 200; i++)
    {
        int count = 0;
        for (int j = 1; j <= i; j++)
        {
            if (i % 2 == 0)
            {
                continue;
            }
            if (i % j == 0)
            {
                count++;
            }
        }
        if (count <= 2)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}