
#include <stdio.h>

int main(void) {

  int n=0;int p1=1; int p2=1;
  scanf("%d", &n);
  int arr[n][n];

  for (int i = 0; i < n; i++)
  {
    for(int j = 0; j < n; j++)
    {
       scanf("%d ", &arr[i][j]);
    }
  }

  for (int i = 0; i < n; i++)
  {
    for(int j = 0; j <n; j++)
    {
            if(j == i)
               p1 *= arr[i][j] ;
    }
  }

  for (int i = 0; i < n; i++)
  {
     for(int j = 0; j <n; j++)
     {
            if((i+j) == (n-1))
               p2 *= arr[i][j];
     }
  }

  switch (p1>p2)
  {
    case 1: printf("%d %d\n", p1, p2); break;
    default: printf("%d %d\n", p2, p1); break;
  }
  return 0;
}  
