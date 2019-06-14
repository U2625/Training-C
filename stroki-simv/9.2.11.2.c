#include <stdio.h>
#include <string.h>

int main() 
{
    char s[100]; int i;
    while (scanf("%s", s) != EOF)
    {  
         if (s[strlen(s) - 1] == s[0] ) printf("%s ", s);
    }
}
