#include <stdio.h>

int main() {
  char    c;
  int    is_word;		//флаг
 
  /*сначала пропускаем пробелы в начале*/  
  while ((c = getchar()) == ' ')
    ;
  /*начало слова*/
  is_word = 1;
  while (c != '\n' && c != EOF)
    {
        if (c == ' ')
            is_word = 0;
        else
        {    
            /*если предыдущий символ пробел,
            то печатаем пробел перед словом*/
            if (!is_word)
                putchar(' ');
            /*печатаем слово*/
            putchar(c);
            is_word = 1;
        }
        c = getchar();
    }
  return 0;
}
