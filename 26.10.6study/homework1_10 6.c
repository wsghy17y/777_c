//#define _CRT_SECURE_NO_WARNINGS
//# include<stdio.h>
//# include<time.h>
//# include<stdlib.h>
//# include<math.h>
//int main()
//{
    /*double x, y;
    scanf("%lf", &x);
    if (x < 1)
    {
        y = x;
    }
    else if (x < 10 && x >= 1)
    {
        y = 2 * x - 1;
    }
    else
    {
        y = 3 * x + 11;
    }
    printf("%lf", y);
    return 0;*/

/*int a, b, c;
scanf("%d %d %d", &a, &b, &c);
if (a >= b && a >= c)
{
    printf("%d", a);
}
else if (b >= a && b >= c)
{
    printf("%d", b);
}
else
{
    printf("%d", c);
}
return 0;*/

/*int x,y;
scanf("%d %d", &x, &y);
if (x >= y)
{
    printf("%d %d", x, x - y);
}
if (y > x)
{
    printf("%d %d", y, y - x);
}
return 0;*/

/*int sum = 0;
for (int i = 1; i < 100; i = i + 2) 
{
    sum = sum + i;
}
printf("%d", sum);
return 0;*/

/*int sum = 0;
for (int i = 1; i <= 1000; i++)
{
    if (i % 3 == 0)
    {
        sum = sum + i;
    }
}
printf("%d", sum);
return 0;*/

/*for (int i = 5; i <= 360; i = i + 5)
{
    double rad = i * 3.14 / 180;
    printf("%d\t %lf\t %lf\t\n", i, cos(rad), sin(rad));
}*/

/*int zhen = 0, fu = 0, ling = 0;
double sz = 0, sf = 0, sl = 0;
for (int i = 1; i <= 20; i++)
{
    int a;
    scanf("%d", &a);
    if (a > 0)
    {
        zhen++;
        sz = sz + a;
    }
    else if (a < 0)
    {
        fu++;
        sf = sf + a;
    }
    else
    {
        ling++;
        sl = sl + a;
    }
}
double midz, midf, midl;
midz = sz / zhen;
midf = sf / fu;
midl = sl / ling;
printf("%d %.2lf\n", zhen, midz);
printf("%d %.2lf\n", fu, midf);
printf("%d %.2lf\n", ling, midl);
return 0;*/

//    int min = 0, max = 0;
//    int fmin = 0, fmax = 0;
//    int arr[20] = { 0 };
//    for (int i = 0; i < 20; i++)
//    {
//        int a;
//        scanf("%d", &a);
//        arr[i] = a;
//    }
//    int lenth = sizeof(arr) / sizeof(int);
//    for (int i = 0; i < lenth; i++)
//    {
//        if (arr[i] > 0)
//        {
//            if (min == 0)
//            {
//                min = arr[i];
//            }
//            if (arr[i] > max)
//            {
//                max = arr[i];
//            }
//            else if (arr[i] < min)
//            {
//                min = arr[i];
//            }
//        }
//        if (arr[i] < 0)
//        {
//            if (fmax == 0)
//            {
//                fmax = arr[i];
//            }
//            if (arr[i] > fmax)
//            {
//                fmax = arr[i];
//            }
//            else if (arr[i] < fmin)
//            {
//                fmin = arr[i];
//            }
//        }
//    }
//    printf("%d %d\n%d %d", max, min, fmax, fmin);
//    return 0;
//}