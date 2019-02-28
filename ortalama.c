#include <stdio.h>
int main()
{
    int i, sayi, toplam;
    toplam = 0;
    for(i = 0 ; i < 10 ; i++)
    {
        printf("%d . sayıyı giriniz:", i + 1);
        scanf("%d", &sayi);
        toplam += sayi;
    }
    printf("Ortalama: %f", (float)toplam / i);
    return 0;
}