#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int month;
    int sum = 0;
    scanf("%d", &month);
    int countarr[100005] = { 1, 1 };
    for (int i = 2; i < month; i++)
    {
        countarr[i] = countarr[i - 1] + countarr[i - 2];
    }
    for (int i = 0; i < month; i++)
    {
        printf("%d\n", countarr[i]);
    }
    return 0;
}