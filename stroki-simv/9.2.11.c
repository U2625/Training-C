#include <stdio.h>
#include <string.h>

int main()
{
    char s[100], *p;
    p = strtok(fgets(s,100,stdin), " ");
    
    while (p)
    {
        if (*p == *(p + strlen(p) - 1))
            printf("%s ", p);
        p = strtok(NULL, " ");
    }
}
