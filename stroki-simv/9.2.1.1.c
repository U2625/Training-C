#include <stdio.h>

int main()
{
  int x = 0;
  char str[100];

  fgets(str, 100, stdin);
    while (str[x] != '\0')
       x++;
    printf("\n%d\n", x);

  return 0;
}

