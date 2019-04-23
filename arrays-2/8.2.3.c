#include <stdio.h>

int main()
{
  int n=0;
  int i=0;
  int j=0;

  scanf("%d", &n);
  int a[n];

  for(int i = 1; i <= n; i++)
  {
    if(i%2 != 0)
    {
            for(j=1; j<=n; j++) a[j] = j;
            for(j=1; j<=n; j++) printf("%d ", a[j]);
            printf("\n");
    }
    else
    {
            for(j=1; j<=n; j++) a[j] = n - j + 1;
            for(j=1; j<=n; j++) printf("%d ", a[j]);
            printf("\n");
    }
  }
  return 0;
}

