#include <stdio.h>
int main()
{
    for(int n = 0; n < 20; n++)
    {
        for(int i = 0; i <= n; i++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(int j = 20; j >= 0; j--)
    {
        for(int k = 0; k <= j; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}