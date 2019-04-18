#include <stdio.h>

int main(void)
{
  int n=0;
  int i=0;
  int k=0;

  scanf("%d", &n);
  int arr[n];

  for(i = 0; i < n ; i++)
  {
    scanf("%d", &arr[i]);
  }

  for(i = 0; i < n; i++)
  {
          if (arr[i] < arr[n-1])
          {
                  printf("%d ", arr[i]);
                  k++;
          }

  }
  if (k==0) printf("0\n");
  return 0;
}
