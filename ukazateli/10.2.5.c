#include <stdio.h>

int main(void) 
{
  int a=0, b=0;
  double f = 0; 

  scanf("%d %d", &a, &b);
  double * p_dbl = &f;
  int * p_1 = &a;
  int * p_2 = &b;

  *p_dbl = (double)(*p_1)/(*p_2);    



  printf("%.3f\n",f);
  
  return 0;
}
