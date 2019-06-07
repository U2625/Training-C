#include<stdio.h>

int factorial(int p)
{
  int factorial = 1;

  for (int i=1; i<=p; i++)
  {
    factorial *= i;
  }

  return factorial;
}

int combin(int n, int k)
{
  int comb = factorial(n)/(factorial(k)*factorial(n-k));
  
  return(comb);
}

int main(void)
{
  int n = 0, k = 0;
  
  scanf("%d%d", &n, &k);
  printf("%d", combin(n, k));

  return 0;
}
