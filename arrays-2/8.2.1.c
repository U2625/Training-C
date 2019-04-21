#include <stdio.h>

int main(void) {

  int n=0; int m=0;
  scanf("%d %d", &n, &m);
  int arr[n][m];

  for (int i = 0; i < n; i++)
  {
    for(int j = 0; j < m; j++)
    {
        scanf("%d ", &arr[i][j]);
    }
  }

  for (int i = 0; i < n; i++)
  {
    for(int j = 0; j < m; j++)
    {
        printf("%d ", arr[i][j]);
    }
  printf("\n");
  }
  return 0;
}

