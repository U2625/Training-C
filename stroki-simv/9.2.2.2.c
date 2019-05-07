#include <stdio.h>

int main(void)
{
    int j = 0;
    char str[100];

    while (scanf("%s", str) == 1) 
    {
        j++;
    }
    printf("%d", j);
  return 0;
}
