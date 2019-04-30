#include <stdio.h>

int main()
{
  int k; char c1, c2;
  scanf("%d", &k);
  for(int i=0; i<k; i++)
  {c1 = 90 - k + i + 1;
   printf("%c", c1);
  }
  return 0;
}

