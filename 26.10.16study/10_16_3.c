# define _CRT_SECURE_NO_WARNINGS
# include<stdio.h>
# include<stdlib.h>
int main()
{
    int target;
    scanf("%d", &target);
    printf("%d=", target);
    int i = 2;
    while (target != 1) 
    {
        if (target % i == 0)
        {
            target = target / i;
            printf("%d", i);
            if (target != 1)
            {
                printf("*");
            }
            continue;
        }
        i++;
    }
    return 0;
}
