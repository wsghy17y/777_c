#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
struct daughter
{
    char name[100];
    int age;
    char gender;
    double height;
    double birthday;
};

int main()
{
    struct daughter d1;
    strcpy(d1.name, "迷迭香");
    d1.age = 14;
    d1.gender = 'F';
    d1.height = 1.42;
    d1.birthday = 7.6;
    printf("我女儿的名字：%s\n", d1.name);
    printf("我女儿的年龄：%d\n", d1.age);
    printf("我女儿的性别：%c\n", d1.gender);
    printf("我女儿的身高：%lf\n", d1.height);
    printf("我女儿的生日：%lf\n", d1.birthday);

    printf("\n");

    struct daughter d2;
    strcpy(d2.name, "阿米娅");
    d2.age = 14;
    d2.gender = 'F';
    d2.height = 1.42;
    d2.birthday = 10.23;
    printf("我女儿的名字：%s\n", d2.name);
    printf("我女儿的年龄：%d\n", d2.age);
    printf("我女儿的性别：%c\n", d2.gender);
    printf("我女儿的身高：%lf\n", d2.height);
    printf("我女儿的生日：%lf\n", d2.birthday);
    return 0;
}
