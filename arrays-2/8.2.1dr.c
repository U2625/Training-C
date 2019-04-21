#include <stdio.h>

int main() {
  int N, M, a[10][10];
  scanf("%d %d", &N, &M);
  for (int i = 0; i++ < N; printf("\n"))
  {
      for (int j = 0; j++ < M; printf("%d ", a[i][j]))
      {
          scanf("%d", &a[i][j]);
      }
  }
}

