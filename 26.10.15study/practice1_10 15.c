# define _CRT_SECURE_NO_WARNINGS
# include<stdio.h>
void swap(int* a,int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    for (int i = 1; i <= 2; i++)
    {
        if (x < y)
        {
            swap(&x, &y);
        }
        if (y < z)
        {
            swap(&y, &z);
        }
    }
    printf("%d %d %d", x, y, z);
    return 0;
}