#include <stdio.h>
#include <math.h>

int main()
{
    int n; int sum = 0; int i = 0;
    char ch[n];

    fgets(ch, n, stdin);

    while (ch[i] != '\0') {i++;}        //vsego simv. v stroke

    for (int j=0; j<i; j++)
    {
      if (ch[j] == '1')
            sum += pow(2, (i-j-1));
    }

    printf("\n%d\n", sum);

    return 0;
}
