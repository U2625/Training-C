#include <stdlib.h>

int cmp(void *a, void *b)
{ 
  return *(int*)a - *(int*)b;
}

int binary_search(int arr[], int n, int arg)
{
  void *c = bsearch (&arg, arr, n, sizeof(int), cmp);
  return c ? (int*)c - (int*)arr : -1;
}
