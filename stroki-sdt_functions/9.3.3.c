#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[50];
    char str2[50];
    scanf("%s %s", str1, str2);
    str1[0] += 32;
    str2[0] += 32;
    strcat(str1, str2);
    strcat(str2, str1);
    int a = strlen(str1);

    if (str1[0] == str1[a-1] || str2[0] == str2[a-1])
    printf("yes\n");
    else printf("no\n");

    return 0;
}
