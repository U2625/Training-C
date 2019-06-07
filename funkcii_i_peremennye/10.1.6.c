#include <stdio.h>

int sequence_multilpiers(int x);

int main(void)
{
  int n;

  scanf("%d", &n);
  printf("%d\n", sequence_multilpiers(n));

  return 0;
}

int sequence_multilpiers(int x)
{
  int s,  i;
  for (i = 1; i < x; i++)
  {
    if (i*(i+1)*(i+2) == x)
    return i;
  }
  return (-1);
}
