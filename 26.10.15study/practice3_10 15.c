# define _CRT_SECURE_NO_WARNINGS
# include<stdio.h>
int main()
{
    int a, b, temp;
    a = 1,b = 1;
    printf("1\n1\n");
    for (int i = 1; i <= 40; i++)
    {
        temp = a + b;
        printf("%d\n", temp);
        a = b;
        b = temp;
    }
    return 0;   
}
