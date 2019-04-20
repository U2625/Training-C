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

  for(i = 0; i < n; i++)
  {
        m += arr[i];
  }
  int sr = m/n;

  for(i = 0; i < n; i++)
  {
       if (arr[i] > sr)
               printf("%d ", arr[i]);
  }

  for(i = 0; i < n; i++)
  {
       if (arr[i] <= sr)
               printf("%d ", arr[i]);
  }
  return 0;
}
