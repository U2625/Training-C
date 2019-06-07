#include <stdio.h>

void print_date(int d, int m, int y, int k);

int main()
{
  int day, month, year, format;

  scanf("%d%d%d%d", &day, &month, &year, &format);
  print_date(day, month, year, format);

  return 0;
}

void print_date(int d, int m, int y, int k)
{
  switch (k)
  {
    case 0: printf("%02d.%02d.%02d\n", d, m, y%100); break;
    case 1: printf("%02d.%02d.%d\n", d, m, y); break;
    case 2: printf("%d/%02d/%02d\n", y, m, d); break;
  }
}
