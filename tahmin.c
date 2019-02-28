#include <stdio.h>
int main()
{
    int a = 10, tahmin;
    printf("Tahmininizi giriniz:");
    scanf("%d", &tahmin);
    while(1)
    {
        if(tahmin == a)
        {
            printf("Tebrikler, doğru tahmin.");
            break;
        }
        else
        {
            printf("Yanlış tahmin. Tekrar deneyiniz:");
            scanf("%d", &tahmin);
        }
    }
    return 0;
}