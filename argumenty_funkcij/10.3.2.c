void sum_digits(int * x)
{
  int b =  *x;
  int a = 0;
    
  *x = 0;
  while (b > 0)
  {
    a += b % 10;
    b = b/10;  
  }
  * x = a; 
}
