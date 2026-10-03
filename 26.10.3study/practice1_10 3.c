/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int flag(int number, int lenth, int arr1[])
{
    for (int i = 0; i < lenth; i++)
    {
        if (number == arr1[i])
        {
            return 1;
        }
    }
    return 0;
}
int main()
{*/
    /*int arr[] = { 33, 5, 22, 44, 55 };
    int max = arr[0];
    int lenth = sizeof(arr) / sizeof(int);
    for (int i = 1; i <= lenth; i++)
    {
        if (max <= arr[i])
        {
            max = arr[i];
        }
    }
    printf("%d\n", max);
    return 0;*/



    /*int arr1[10] = { 0 };
    int lenth = sizeof(arr1) / sizeof(int);
    srand(time(NULL));
    int i = 0;
    while (i < lenth) 
    {
        int number = rand() % 10 + 1;
        int a = flag( number,  lenth,  arr1);
        if (!a)
        {
            arr1[i] = number;
            i++;
            printf("%d\n", number);
        }
    }
    int sum = 0;
    for (int j = 0; j < lenth; j++) 
    {
        sum = sum + arr1[j];
    }
    printf("%d", sum);
    return 0;
}*/

