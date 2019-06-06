#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[6];
    int k = 0;

    scanf("%s", str);
    printf(str[0]+str[1]+str[2] == str[3]+str[4]+str[5] ? "yes\n" : "no\n");
    
    return 0;
}
