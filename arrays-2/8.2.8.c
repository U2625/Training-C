#include <stdio.h>

int main(void) 
{

  int n=0;int m=0;

  scanf("%d %d", &n, &m);
  int arr[n][m];
  int sum = 0;
  int max = -9999, min = 9999, max_index = 0, min_index = 0;

  for (int i = 0; i < n; i++)           //scan
  {
    for(int j = 0; j < m; j++)
    {
       scanf("%d ", &arr[i][j]);
    }
  }
  for (int j = 0; j <m; j++)            //sum
  {
    sum=0;
    for(int i = 0; i < n; i++)
    {
       sum += arr[i][j];
    }
  //  printf("%d ", sum);
    if (sum>max)                        //max
    {
      max = sum;
      max_index = j;
    }
    if (sum<min)                        //min
    {
      min = sum;
      min_index = j;
    }
  }
  printf("\n");
  int tmp = 0;

  for (int i=0; i<n; i++)               //swap
  {
    tmp = arr[i][min_index];
    arr[i][min_index] = arr[i][max_index];
    arr[i][max_index] = tmp;
  }

  for (int i=0; i<n; i++)               //print
  {
    for(int j=0; j<m; j++)
    {
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }

  return 0;
}

