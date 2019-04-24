#include <stdio.h>

int main(void) {

  int n=0;int s1=0; int s2=0;
  scanf("%d", &n);
  int arr[n][n];

  for (int i = 0; i < n; i++)
  {
    for(int j = 0; j < n; j++)
    {
       scanf("%d ", &arr[i][j]);
       if(j > i)
               s1 += arr[i][j] ;
       if((i+j) > (n-1))
               s2 += arr[i][j];
    }
  }

  printf("%d %d\n", s1<s2 ? s1 : s2, s1>=s2? s1 : s2);
  return 0;
}  
/*  switch (s1>s2)
  {
    case 1: printf("%d %d\n", s2, s1); break;
    default: printf("%d %d\n", s1, s2); break;
  }
*/

