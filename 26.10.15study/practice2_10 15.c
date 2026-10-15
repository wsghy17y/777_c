#define _CRT_SECURE_NO_WARNINGS
# include<stdio.h>
int main()
{
    const char* c[] = { "****", "*", "*", "****" };
    //char c[4][6]={ "****", "*", "*", "****" };
    for (int i = 0; i < 4; i++)
    {
        printf("%s\n", c[i]);
    }
    return 0;
}