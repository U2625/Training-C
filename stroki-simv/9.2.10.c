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
      if (str[0] == '.' || str[len-1] == '.')
        a += 2;
      if (str[i] == '.')
        a++;
      if(str[i] < 45 || str[i] == 47 || str[i] >57)
        a += 2;
    }
    switch (a)
    {
      case 1: printf("float\n");break;
      case 0: printf("int\n");break;
      default: printf("error\n");break;
    }
    return 0;
}
