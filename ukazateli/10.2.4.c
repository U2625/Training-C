#include <stdio.h>

int main(void) {

  int a = 0, b = 0;
  scanf("%d %d", &a, &b);

  int * p_1 = &b;
  int * p_2 = &a;

  printf("%d",*p_2 + *p_1);

  return 0;
}
