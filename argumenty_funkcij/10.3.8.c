int abs_arr(int arr[], int n)
{
  int x = 0;  
  
  for (int i = 0; i < n; i++)
  {
    if (arr[i] < 0)
    {
        arr[i] = abs(arr[i]);
        x++;
    }
  }
    return x;    
}
