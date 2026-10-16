# define _CRT_SECURE_NO_WARNINGS
# include<stdio.h>
# include<stdlib.h>
int main()
{
    //long long m, n;
    //scanf("%lld %lld", &m, &n);
    //long long max = m > n ? m : n;
    //long long min = m < n ? m : n;
    //long long i = min;
    //while (1) 
    //{
    //    if (m % i == 0 && n % i == 0)
    //    {
    //        printf("最大公约数为:%lld\n", i);
    //        break;
    //    }
    //    i--;
    //}
    //long long j = max;
    //while (1)
    //{
    //    if (j % m == 0 && j % n == 0)
    //    {
    //        printf("最小公倍数为:%lld\n", j);
    //        break;
    //    }
    //    j++;
    //}
    long long m, n, temp, m1, n1;
    scanf("%lld %lld", &m, &n);
    m1 = m,n1 = n;
    while (n != 0)
    {
        temp = m % n;
        m = n;
        n = temp;
    }
    printf("最大公约数为:%lld\n", m);
    temp = m1 * n1 / m;
    printf("最小公倍数为:%lld\n", temp);
    return 0;
}
