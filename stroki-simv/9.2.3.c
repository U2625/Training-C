#include <stdio.h>

int main()
{
    int a, i;
    a=0;
    char s1; char s2[100];

    scanf("%c\n", &s1);
    fgets(s2, 100, stdin);

    for (i=0; i<100; i++)
    {
        if (s1 == s2[i])
        {
                a++;
                printf("%d\n", i); break;
        }
    }
    if (a == 0) printf("-1\n");

    return 0;
}
