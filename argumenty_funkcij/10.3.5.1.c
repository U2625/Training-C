void char_cesar(char * ch, int shift)
{
  * ch = *ch += shift % 26;
  if (* ch > 'z')
      * ch = *ch - 'z' + 'a'-1;
}
