#include <stdio.h>

int main(void)
{
  int n=0;
  int i=0;
  int max = 0; int min = 1000;

  scanf("%d", &n);
  int arr[n];

  for(i = 0; i < n ; i++)
  {
    scanf("%d", &arr[i]);
    if (arr[i] > max)
        max = arr[i];
    if (arr[i] < min)
        min = arr[i];
  }

  for(i = 0; i < n; i++)
  {
        if (arr[i] == max)
                printf("%d ", min);
        else if (arr[i] == min)
                printf("%d ", max);
        else
                printf("%d ", arr[i]);
  }
  return 0;
}

