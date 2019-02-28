#include <stdio.h>
float bol(float a, float b)
{
    float g;
    g = a / b;
    return g;
}

int topla(int a, int b)
{
    int c;
    c = a + b;
    return c;
}

int main()
{
    int x, y, z;
    float f;
    printf("Hoş Geldiniz\nBirinci sayıyı giriniz:");
    scanf("%d", &x);
    printf("İkinci sayiyi giriniz:");
    scanf("%d", &y);
    z = topla(x, y);
    f = bol(x, y);
    printf("İki sayının toplamı = %d,\nİki sayının bölümü = %f", z, f);
}
