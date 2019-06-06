#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[50] = {0};
    char str2[50] = {0};
    int k = 0;

    fgets(str1, 50, stdin);
    fgets(str2, 50, stdin);
    for(int i=0; i<50; i++)
    {
      if(str1[i] == str2[i] || str1[i]-32 == str2[i] || str1[i]+32 == str2[i])
        k++;
    }
    printf(k == 50 ? "yes\n" : "no\n");

    return 0;
}
