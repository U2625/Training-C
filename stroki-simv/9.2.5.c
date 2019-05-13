#include <stdio.h>

int main()
{
  int i=0;
  char str[100]={0};

  fgets(str, 100, stdin);
  printf("\n");
  for (int i=0; i<100; i++)
  {
    if (str[i] != ' ' && str[i] != '\n' && str[i] != '\0') printf("%c", str[i]);    if (str[i+1] == ' ' && str[i] != ' ') printf(" ");
    if (str[i] == ' ' && str[i-1] == ' ') continue;
  }
  printf("\n");

  return 0;
}
