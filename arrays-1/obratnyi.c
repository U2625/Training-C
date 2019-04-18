#include <stdio.h>

int main(void)
{
  int n=0;
  scanf("%d", &n);
  int arr[n];
  unsigned i;

  for(i = 0; i < n ; i++)
  {
    scanf("%d", &arr[i]);
  }

  for(i = 0; i < n ; i++)
  {
    printf("%d ", arr[n-i-1]);
  }
  return 0;
}

