/*#include<stdio.h>
long long fashi(long long s,long long a,long long c)
{
    return (s-c-a)*20;  
}
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        long long s, a, c;
        scanf("%lld", &s);
        scanf("%lld", &a);
        scanf("%lld", &c);
        long long time = fashi(s, a, c);
        printf("%lld ", time);
    }
    return 0;
}
#include<stdio.h>
int judgement(long long temp)
{
    if (temp == 0 || temp == 1)
    {
        return 0;
    }
    else if (temp % 2 == 0 && temp > 2)
    {
        return 0;
    }
    for (long long i = 3; i * i <= temp; i++)
    {
        if (temp % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int T;
    scanf("%d", &T);
    int sum = 0;
    for (int i = 1; i <= T; i++)
    {
        long long temp;
        scanf("%d", &temp);
        int judge = judgement(temp);
        if (judge == 1)
        {
            sum++;
        }
    }
    printf("%d ", sum);
    if (sum == T)
    {
        printf("AC");
    }
    else
    {
        printf("WA");
    }
    return;
}
#include<stdio.h>
int good(int arr[], int n, int m)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= m)
        {
            sum++;
        }
    }
    return sum;
}
int main()
{
    int arr[1005] = { 0 };
    int n, m;
    double goodsum = 0;
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++)
    {
        int score;
        scanf("%d", &score);
        arr[i] = score;
        if (arr[i] >= m)
        {
            goodsum = goodsum + arr[i];
        }
    }
    int shu = good(arr, n, m);
    double mid = goodsum / shu;
    printf("%d\n", shu);
    if (shu == 0)
    {
        printf("0.0");
    }
    else
    {
        printf("%.1lf", mid);
    }
    return 0;
}*/
