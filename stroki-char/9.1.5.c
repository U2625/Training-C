#include <stdio.h>

int main()
{
  int k; char c1, c2;
  scanf("%d", &k);
  c1 = 64 + k;
  c2 = 96 + k;

  printf("%c%c\n", c1, c2);
  return 0;
}

