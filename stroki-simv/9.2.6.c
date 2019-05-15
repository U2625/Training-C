#include <stdio.h>

int main()
{
    int a, i;
    a=0;

    char s1[15]={0}; char s2[15]={0};

    fgets(s1, 15, stdin);
    fgets(s2, 15, stdin);

    for (i=0; i<15; i++)
    {
        if (s1[i] != s2[i])
        {
                a++;
        }
    }
    printf("%d\n", a);

    return 0;
}
