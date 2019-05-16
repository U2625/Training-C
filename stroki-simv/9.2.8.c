#include <stdio.h>
#include <string.h>

int main()
{
    int a,b, i;
    a=0;b=0;
    char str[100] = {0};

    fgets(str, 100, stdin);

    for (i=0; i<strlen(str); i++)
    {

        if (str[i+1] == '*' && str[i] == '/') {a++;}
        else
        {
          if (str[i-1] == '*' && str[i] == '/') {a--;}

          else if (a==0) printf("%c",str[i]);
        }
    }
    printf("\n");
    return 0;
}
