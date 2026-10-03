/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void printarr(int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main()
{
    int arr[5] = { 0 };
    int len = sizeof(arr) / sizeof(int);
    for (int i = 0; i < len; i++)
    {
        printf("请录入第%d个数据", i + 1);
        scanf("%d", &arr[i]);
    }
    printarr(arr, len);
    int a = 0, b = len - 1;
    while (a < b)
    {
        int temp = arr[a];
        arr[a] = arr[b];
        arr[b] = temp;
        a++,b--;
    }
    printarr(arr, len);
    return 0;
}*/