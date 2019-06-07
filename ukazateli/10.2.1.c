#include <stdio.h>
int main(void) 
{

  int a = 0, b = 0;
  scanf("%d %d", &a, &b);

  int * p_a = &a;
  int * p_b = &b;

  printf("%d",*p_a + *p_b);

  return 0;
}
