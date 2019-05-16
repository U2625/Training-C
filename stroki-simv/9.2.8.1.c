#include <stdio.h>
#include <string.h>

int main()
{
    char s[101], so[101], *pb, *pe;
    
    gets(s);
    
    pb = strstr(s, "/*");
    pe = strstr(pb+2, "*/");
    
    if (pe == NULL || pb == NULL)
     {
         puts(s);
         return 0;
     }
    
    printf("%s", pb == s ? pe+2 : strcat(strncpy(so, s, pb-s), pe+2));
}
