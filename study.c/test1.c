#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    printf("体温数据%d\n", a);
    if (a > 37) 
    {
        printf("体温超标报警");
    }
    return 0;
}