#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    /*char a[105];
    scanf("%s", a);
    int b = 0;
    for (int i = 0; a[i] != '\0';i++)
    {
        b++;
    }
    printf("%d", b);
    return 0;*/

    
        char a[105];
        scanf("%s", a);
        int b = 0;
        while (a[b] != '\0')
        {
            b++;
        }
        int d = 0, c = b-1;
        while (d <= c)
        {
            char temp = a[d];
            a[d] = a[c];
            a[c] = temp;
            d++,c--;
        }
        printf("%s", a);
        return 0;
    
}