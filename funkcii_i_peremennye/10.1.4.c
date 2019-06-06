#include <stdio.h>
int factorial(int);

int main(void){
 int a;
 int fac = 0;
    
 scanf("%d", &a);
 fac = factorial(a);
 printf("%d\n", fac);
    
    return 0;
}
int factorial(int k){
  int fact = 1;
  for (int i=1; i<=k; i++)
  {
    fact *= i;
  }
  return fact;
}
