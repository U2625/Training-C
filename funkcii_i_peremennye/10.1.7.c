#include <stdio.h>

void square(int, char);

int main(void)
{
  int n;
  char c;

  scanf("%d %c ", &n, &c);
  square(n,c);

  return 0;
}

void square(int x, char c)
{
  int i, j;
  for (i = 1; i <= x; i++)
  {
    for (j = 1; j <= x; j++)
    {
      printf("%c", c);
    }
  printf("\n");
  }
}
