/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void confess(int a)
{
    for (int i = 1; i <= a; i++)
    {
        printf("i like you\n");
    }
}

int to_sum(int a, int b, int c)
{
    int sum = a + b + c;
    return sum;
}

int main()
{
    confess(0);
    int o = to_sum(10, 20, 15);
    int s = to_sum(20, 30, 17);
    int t = to_sum(19, 17, 20);
    int f = to_sum(23, 21, 19);
    if (o > s && o > t && o > f)
    {
        printf("1");
    }
    else if (s > o && s > t && s > f)
    {
        printf("2");
    }
    else if (t > o && t > s && t > f)
    {
        printf("3");
    }
    else
    {
        printf("4");
    }
    return 0;



    for (int i=1;i>=1;i++)
    {
        srand(6);
        int a; scanf("%d", &a);
        int number = rand() % 100 + 1;
        if (a == number)
        {
            printf("猜对啦！！！");
            break;
        }
        else if (a >= number)
        {
            printf("大了");
        }
        else
        {
            printf("小了"); 
        }
    }
    return 0;
}*/
