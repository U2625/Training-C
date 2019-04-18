#include <stdio.h>

int main(void)
{
  int n=0;
  int i=0;
  int j=0;
  int k=0;
  scanf("%d", &n);
  int arr[n];

  for(i = 0; i < n ; i++)
  {
    scanf("%d", &arr[i]);
  }

  for(i = 0, j = n-1 ; i < n/2; i++, j--)
  {
    switch (arr[i] == arr[j])
    {
            case 1: k++;
            case 0: break;
    }
  }
  if (k == n/2) printf("YES\n");
  else printf("NO\n");
  return 0;
}

