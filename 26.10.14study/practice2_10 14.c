#define _CRT_SECURE_NO_WARNINGS
# include<stdio.h>
int main()
{
    int year, month, day;
    int arr[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    scanf("%d %d %d", &year, &month, &day);
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    {
        arr[1] = 29;
    }
    if (year < 0)
    {
        printf("年份不合法");
        return 0;
    }
    else if (month > 12 || month < 1)
    {
        printf("月份不合法");
        return 0;
    }
    else if (day > arr[month - 1] || day <= 0)
    { 
        printf("日期不合法");
        return 0;
    }
    int sum = 0;
    for (int i = 0; i < month - 1; i++)
    {
        sum = sum + arr[i];
    }
    sum = sum + day;
    printf("%d", sum);
    return 0;
}