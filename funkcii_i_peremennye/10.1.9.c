void factors(int n)
{
    for(int i = 1; i<=n; i++)
      if(n % i == 0)
        printf("%d ",i);
}
