#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    int score;
    scanf("%d", &score);
    printf("考试分数为：%d\n", score);
    if (score >= 95)
    {
        printf("奖励一辆自行车\n");
    }
    else if (score < 95 && score >= 90)
    {
        printf("奖励去游乐场玩\n");
    }
    else
    {
        printf("奖励一顿打");
    }
    return 0;
}