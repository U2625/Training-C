#include <stdio.h>

int main() 
  {
    int n;
    int step;
    char dir[5] = {0};
    int x, y;
    x=0; y=0;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
      scanf("%s %d", dir, &step);

       if (dir[0] == 'N') y += step;
       if (dir[0] == 'S') y += -step;
       if (dir[0] == 'E') x += step;
       if (dir[0] == 'W') x += -step;
    }
    printf("%d %d\n", x, y);

  return 0;
}
