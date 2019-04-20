#include <stdio.h>

int main(void)
{
  int n=0;
  int i=0;
  double m=0;

  scanf("%d", &n);
  int arr[n];

  for(i = 0; i < n ; i++)
  {
    scanf("%d", &arr[i]);
  }

  for(i = n/2; i < n; i++)
  {
        printf("%d ", arr[i]);
  }

  for(i = 0; i < n/2; i++)
  {
        printf("%d ", arr[i]);
  }
  return 0;
}

