#include <stdio.h>

int main()
{
  char c;
  scanf("%c", &c);
  if (c>='0' && c<='9') printf("digit\n");
  else if ((c>='A' && c<='Z') || (c>='a' && c<='z')) printf("en\n");
  else printf("error\n");

  return 0;
}

