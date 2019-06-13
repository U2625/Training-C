int gcd(int x, int y)
{
  while ( x != 0 && y != 0)
  {
    if (x > y)
       x = x % y;
    else
       y = y % x;
  }
   return(x+y);
}

void reduce_fraction(int * a, int * b)
{
  int t = gcd(*a, *b);		// после первого вызова функции *a изменяется  
  * a = *a / t;
  * b = *b / t;
}
