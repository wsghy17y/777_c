# define _CRT_SECURE_NO_WARNINGS
# include<stdio.h>
# include<string.h>
//struct student
//{
//    char name[100];
//    int age;
//};
//int main()
//{
//    struct student stu1;
//    strcpy(stu1.name, "zhangan");
//    stu1.age = 17;

//    struct student stu2;
//    strcpy(stu2.name, "zhan");
//    stu2.age = 17;

//    struct student stu3;
//    strcpy(stu3.name, "gan");
//    stu3.age = 17;

//    struct student stuarr[3] ={ stu1,stu2,stu3};
//    for (int i = 0; i < 3; i++) 
//    {
//        struct student temp = stuarr[i];
//printf("%s ", temp.name);
//printf("%d\n", temp.age);
//    }
//    return 0;
//}
typedef struct student
{
    char name[100];
    int age;
} stu;

int main()
{
    stu s1 ={ "ЬЉТо",5000};
    stu s2 ={ "sailuo",1000};
    stu arr[2] = { s1, s2 };
    for (int i = 0; i < 2; i++)
    {
        stu temp = arr[i];
        printf("%s ", temp.name);
        printf("%d\n", temp.age);
    }
    return 0;
}
