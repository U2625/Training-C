#include <stdio.h>

int sequence_multilpiers(int x);

int main(void)
{
  int n, k;

  scanf("%d", &n);
  k = sequence_multilpiers(n);
  if (k>0)
    printf("%d\n", k);
  else
    printf("-1\n");

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
  return (0);
}
