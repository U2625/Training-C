void char_cesar(char * ch, int shift)
{
  * ch = *ch += shift % 26;
  if (* ch > 122)
      * ch = *ch - 122 + 96;
}
