#include <stdio.h>
int main(void) 
{
  int a=0, b=0;
 
  scanf("%d %d", &a, &b);
  int * p_1 = &a;
  int * p_2 = &b;

  int temp;
  
  temp = *p_1;
  *p_1 = *p_2;
  *p_2 = temp;
    
  printf("%d %d", a, b);
  return 0;
}
