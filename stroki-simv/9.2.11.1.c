#include <stdio.h>
#include <string.h>

int main()
{
    char str[100] = {0}, *p = 0;

    fgets(str, 100, stdin);
    for(p = strtok(str, " "); p; p = strtok(0, " "))
    {
        if(p[0] == p[strlen(p) - 1])
        {
            printf("%s ", p);
        }
    }
}
