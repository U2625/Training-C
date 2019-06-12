void char_register(char * ch, int fl)
{
  if (fl == 0)
  {
    if (*ch >=65 && *ch <= 90)
    {
      * ch = *ch + 32;
    }
  } 
  if (fl == 1)
  {
    if (*ch >=97 && *ch <= 122)
    {
      * ch = *ch - 32;
    }
  } 
}
