void minmax(int * x, int * y)
{
  int a = 0;

  if (*x > *y)
  {
    a = *y;
    * y = *x;
    * x = a;  
  }
}
