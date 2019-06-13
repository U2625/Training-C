int minmax(int arr[], int n, int fl)
{ 
  int min = 9999;
  int max = -9999;
    
  for (int i = 0; i < n; i++)
  {
    if (arr[i] < min)
        min = arr[i];
    if (arr[i] > max)
        max = arr[i];
  }
  switch (fl)			//
  {				//
      case 0:			//
          return min; break;	// return fl ? max : min;
      case 1:			//
          return max; break;	//
  }
}
