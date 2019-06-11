#include <stdio.h>

int main(void) {
  char ch;
  char inp;

  scanf("%c", &inp);

  char * p_ch = &ch;
  *p_ch = inp;


  printf("%c", *p_ch);

return 0;
}     
