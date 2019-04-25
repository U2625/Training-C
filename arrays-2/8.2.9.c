#include <stdio.h>

int main(void) {

  int n=0, k=0, tmp = 0;
  scanf("%d", &n);
  int arr[n][n];
  int i=0,  j=0, a=0;

  for (int i = 0; i < n; i++)           //scan
  {
    for(int j = 0; j < n; j++)
    {
       scanf("%d ", &arr[i][j]);
    }
  }

  scanf("%d", &k);			//scan k=sdvig

  k = k%n;                              //sdvig
  k = k<0 ? n + k : k;

  for(int a=0; a<k; a++)		//skolko ciklov sdvigaem
  {
    for(int i=0; i<n; i++)
    {
       tmp = arr[i][n-1];		//zanosim v tmp choby ne steret posl chislo
       for(j=n-1; j>0; j--)
       {
	 arr[i][j] = arr[i][j-1];	//sdvigaem massiv
       } 
       arr[i][0] = tmp;
    }
  }

  for (int i = 0; i < n; i++)
  {
    for(int j = 0; j < n; j++)
    {
      printf("%d ", arr[i][j]);		//BINGO
    }
  printf("\n");
  }

  return 0;
}
