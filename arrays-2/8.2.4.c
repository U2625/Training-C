#include <stdio.h>
#include <math.h>

int main(void) {
    int n,m; scanf("%d %d",&n,&m);
    int arr[n][n];

    for (int i = 0; i < n; i++)
    {
      for(int j = 0; j < n; j++)
      {
         arr[i][j] = 1+fabs(i-j);
      }
    }
    for (int i = 0; i < n; i++)
    {
       for(int j = 0; j < n; j++)
       {
            printf("%d ",arr[i][j]);
       }
        printf("\n");
    }
    return 0;
}
