# define _CRT_SECURE_NO_WARNINGS
# include<stdio.h>
# include<string.h>
# include<time.h>
# include<stdlib.h>
typedef struct spot
{
    char name[100];
    int count;
} s;

int main()
{
    srand(time(NULL));
    s spotarr[4] = { { "A", 0 }, { "B", 0 }, { "C", 0 }, { "D", 0 } };
    for (int i = 0; i < 80; i++)
    {
        int choose = rand() % 4;
        spotarr[choose].count++;
    }
    for (int i = 0; i < 4; i++)
    {
        printf("%s %d\n", spotarr[i].name, spotarr[i].count);
    }
    int max = spotarr[0].count;
    for (int i = 1; i < 4; i++)
    {
        if (max < spotarr[i].count)
        {
            max = spotarr[i].count;
        }
    }
    for (int i = 0; i < 4; i++)
    {
        if (max == spotarr[i].count)
        {
            printf("%s", spotarr[i].name);
            break;
        }
    }
    return 0;
}
