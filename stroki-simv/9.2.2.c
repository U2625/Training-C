#include <stdio.h>

#define IN      1
#define OUT     0

int main(void)
{
  int x, state; int w=0; int wd = 0;

  state = OUT;
  while ((x = getchar()) !=EOF)
  {
         if (x == '\n' || x == '\0') break;
         if (x == ' ')
            state = OUT;
          else if (state == OUT)
          {
            state = IN;
            wd++;
          }
  }

  printf("\n%d\n", wd);

  return 0;
}
