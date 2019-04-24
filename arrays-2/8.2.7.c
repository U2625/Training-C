#include <stdio.h>

int main(void) {

  int n=0;int m=0;
  scanf("%d %d", &n, &m);
  int arr[n][m];
  int sum = 0;

  for (int i = 0; i < n; i++)
  {
    for(int j = 0; j < m; j++)
    {
       scanf("%d ", &arr[i][j]);
    }
  }
  for (int j = m-1; j >= 0; j--)
  {
    for(int i = 0; i < n; i++)
    {
     sum += arr[i][j];
    }
    printf("%d ", sum);
    sum = 0;
  }

  return 0;
}
