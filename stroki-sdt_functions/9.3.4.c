#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[50];
    char str2[50];
   // scanf("%s %s", str1, str2);   --> ?? probely v strokah
    fgets(str1, 50, stdin);
    fgets(str2, 50, stdin);
    int x = strcmp(str1, str2);
    printf(x==0 ? "yes\n" : "no\n");

    return 0;
}
