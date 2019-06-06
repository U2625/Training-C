#include <stdio.h>

int min(int, int);

int main(void)
{
  int x = 0;
  int y = 0;
  int z = 0;

  scanf("%d %d", &x, &y);
  z = min(x,y);
  printf("%d\n", z);

  return 0;
}

int min(int a, int b)
{
  int min = a;
  if (a > b)
    min = b;

  return min;
}
