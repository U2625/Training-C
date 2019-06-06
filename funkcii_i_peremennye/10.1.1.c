#include <stdio.h>

int sum(int, int);

int main(void)
{
  int x = 0;
  int y = 0;
  int z = 0;

  scanf("%d %d", &x, &y);
  z = sum(x,y);
  printf("%d\n", z);
  
  return 0;
}

int sum(int a, int b)
{
  
  int sum = a + b;
  
  return sum;
}
