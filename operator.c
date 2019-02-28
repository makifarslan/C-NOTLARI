#include <stdio.h>
int main()
{
  int a = 10;
  int b = a++;       /* a++ ve ++a arasında öncelik farkı var.*/
  printf("%d", a);
  printf("%d", b);
  return 0;
}