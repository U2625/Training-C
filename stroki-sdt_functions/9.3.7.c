#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[50];
    char str2[50];
    int i=0; int j=0; int count = 0;

    scanf("%s %s", str1, str2);
    for(i=0; i<strlen(str2); i++)
    {
      for(j=0; j<strlen(str1); j++)
      {
      if (str1[j] == str2[i])
                      {
                        count++;
                        str1[j] = '0'; break;
                      }
      }
    }

    printf(count == strlen(str2) ? "yes\n" : "no\n");


    return 0;
}
