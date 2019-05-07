#include <stdio.h>

int main() 
{
    int i=0, j=0;
    char str[100];

    fgets(str, 100, stdin);
    while(str[i] != '\0')
    {
      if(str[i-1] == ' ' && str[i] != ' ') j++;
      i++;
    }
    printf("%d",j+1);
}
