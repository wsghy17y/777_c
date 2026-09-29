#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    int week;
    scanf("%d", &week);
    printf("今天是星期%d\n", week);
    switch(week)
    {
        case 1:
            printf("跑步");
            break;
        case 2:
            printf("游泳");
            break;
        case 3:
            printf("慢走");
            break;
        case 4:
            printf("动感单车");
            break;
        case 5:
            printf("拳击");
            break;
        case 6:
            printf("爬山");
            break;
        case 7:
            printf("好好吃一下");
            break;
        default:
            printf("没有这个星期");
            break;
        }
    return 0;
}