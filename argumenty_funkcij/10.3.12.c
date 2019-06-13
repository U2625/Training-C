int binary_search(int arr[], int n, int arg)
{
  int first = 0;
  int last = n-1;

  while (first <= last) 
  {
    int mid = (last + first) / 2;

    if (arr[mid] == arg)
      return mid;
    else if (arg < arr[mid])
      last = mid - 1;
    else
      first = mid + 1;
  }

  return -1;	   
}
