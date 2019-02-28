#include <stdio.h>
int main()
{
    int x, y;
    printf("Birinci sayıyı giriniz:");
    scanf("%d", &x);
    printf("İkinci sayıyı giriniz:");
    scanf("%d", &y);

    if(x > y)
    {
        if(x % 2 == 0)
        printf("Büyük sayı %d ve çifttir.\n", x);
        else
        printf("Büyük sayı %d ve tektir.\n", x);

    }
    else
    {
        if(y % 2 == 0)
        printf("Büyük sayı %d ve çifttir.\n", y);
        else
        printf("Büyük sayı %d ve tektir.\n", y);
    }    
    return 0;
}