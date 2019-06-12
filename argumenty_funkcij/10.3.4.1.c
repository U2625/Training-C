void char_register(char * ch, int fl) 
{
    *ch = (fl)? toupper(*ch):tolower(*ch);    
}
