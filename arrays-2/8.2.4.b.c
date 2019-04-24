#include <stdio.h>

int main() {
  int N;
  scanf("%d", &N);
    
  for (int i = 0; i++ < N; printf("\n"))
    for (int j = 0; j++ < N; printf("%d ", abs(i - j) + 1));   
  
}
