#define _CRT_SECURE_NO_WARNINGS
# include<stdio.h>`
int main()
{
    /*printf("珠穆朗玛峰高度为8844430mm\n一张纸厚度为0.1mm\n");
    double a = 0.1;
    int count = 0;
    while(a<=8844430)
    {
        count++;
        a = a * 2;
    }
    printf("对折%d次纸高度可以超过珠峰", count);
    return 0;*/



    /*int a = 123;
    int b = 0;
    while (b != 321) 
    {
        int temp = a % 10;
        a = a / 10;
        b = b * 10 + temp;
    }
    printf("%d", b);
    return 0;*/



    /*int a;
    scanf("%d", &a);
    int b = 0;
    while (b * b <= a)
    {
        b++;
    }
    printf("%d", b - 1);
    return 0;*/



    /*long long num1, num2;
    printf("输入一个数判断是否为回文数");
    scanf("%lld", &num1);
    num2 = num1;
    long long rev = 0;
    while (num1 != 0) 
    {
        int temp = num1 % 10;
        num1 = num1 / 10;
        rev = rev * 10 + temp;
    }
    if (rev == num2)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;*/



    long long dividend, divisor, yu;
    long long a = 0, shang = 0;
    scanf("%lld %lld", &dividend, &divisor);
    while (a <= dividend) 
    {
        a = a + divisor;
        shang++;
    }
    yu = dividend - (a - divisor);
    printf("商为%lld\n余为%lld", shang - 1, yu);
    return 0;
}