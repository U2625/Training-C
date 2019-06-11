#include <stdio.h>

int main(void) 
{
  int a = 0, b = 0;
  int * p_a = &a;
  int * p_a = &b;
  int c = 0, d = 0;
  scanf("%d %d",&c,&d);
  
  *p_1 = c;
  *p_2 = d;

  printf("%d %d",*p_1, *p_2);

  return 0;
}
