#define _CRT_SECURE_NO_WARNINGS
# include<stdio.h>
int main()
{
    int j;
    int n, x;
    for (int i = 2; i <= 84; i++)
    {
        if (168 % i == 0)
        {
            j = 168 / i;
            if (i > j && (i + j) % 2 == 0 && (i - j) % 2 == 0)
            {
                n = (i - j) / 2;
                x = n * n - 100;
                printf("%d\n", x);
            }
        }
    }
    return 0;
}