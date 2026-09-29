#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    //for (int i = 1; i <= 10; i++)
    //{
    //    printf("i love you\n");
    //}
    /*for (int i=1;i<=5;i++)
    {
        printf("%d\n",i);
        a = a + i;
    }
    printf("%d", a);*/
    /*for(int i=5;i>=1;i--)
    {
        printf("%d\n", i);
    }*/
    /* for (int i=1;i<=99;i=i+2)
     {
         b = b + i;
     }
     printf("%d\n", b);
     for (int i=0;i<=100;i=i+2)
     {
         c = c + i;
     }
     printf("%d\n", c);
     for (int i=1;i<=100;i++)
     {
         if (i%2==0)
         {
             d = d + i;
         }
     }
     printf("%d", d);*/
    int num1, num2, max, min;
    int e = 0;
    printf("请输入两个数字确定取值范围");
    scanf("%d %d", &num1, &num2);
    min = num1 < num2 ? num1 : num2;
    max = num1 > num2 ? num1 : num2;
    for (int i=min;i<=max;i++)
    {
        if (i%8==0&&i%6==0)
        {
            e++;
        }
    }
    printf("上述范围内同时被6和8整除的数有%d个", e);
    return 0;
}