#include <stdlib.h>
int comp (const void *, const void *);
int comp1 (const void *, const void *);
void sort_arr(int arr[], int n, int fl)
{
  return fl ? qsort(arr, n, sizeof(int), comp1) : qsort(arr, n, sizeof(int), comp);
}

int comp(const void *i, const void *j)
{
  return *(int *)i - *(int *)j;
}

int comp1(const void *i, const void *j)
{
 return *(int *)j - *(int *)i;
}      
