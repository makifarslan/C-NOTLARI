#include <stdio.h>
int main()
{
    printf("Lütfen bir sayı giriniz:");
    int a = 1, b;
    scanf("%d", &b);
    int flag = 0;
    while(a < b - 1)
    {
        a++;
        if(b % a == 0)
        {
            flag = 1;
            break;
        }
    }
    if(flag == 0)
        printf("Say asaldır.");
    else
        printf("Sayı asal değildir.");
    return 0;
}