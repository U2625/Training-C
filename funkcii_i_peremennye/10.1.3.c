#include<stdio.h>

int min(int a, int b, int c)
{
  int min = a;
  
  if (b<a && b<c) min = b;
  else if (c<a && c<b) min = c;

  return min;  
}

int main(void)
{
  int x = 0, y = 0, z = 0;
  int m = 0;
  scanf("%d %d %d", &x, &y, &z);
  m = min(x, y, z);
  printf("%d\n", m);
    
  return 0;
}
