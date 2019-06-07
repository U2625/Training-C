int is_prime(int k)
{
  int x = 0; int i = 0;
  
  for(i = 1; i <= k; i++)
    if(k % i == 0)
      x++;
    if (x == 2)
        return 1;
    else
        return 0;
}
