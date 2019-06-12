void minmax(int * x, int * y)
{
  if(*x>*y)
    *x ^= *y ^= *x ^= *y;
}
/*
  *x = *x ^ *y;
  *y = *y ^ *x;
  *x = *x ^ *y;    */
