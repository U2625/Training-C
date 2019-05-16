#include <stdio.h>
#include <string.h>

int main()
{
    int a,b, i; int len = 0;
    a=0;b=0;
    char str[100] = {0};

    fgets(str, 100, stdin);
    len = strlen(str) - 1;
    for(i=0; i < len; i++)
    {
      if((len-i)%3 == 0)
      {
         if(i==0)
           printf("%c", str[i]);
         else
         {
           printf(" ");
           printf("%c", str[i]);
         }
      }
      else printf("%c", str[i]);
    }
    printf("\n");
    return 0;
}
