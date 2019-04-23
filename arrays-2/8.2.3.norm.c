#include <stdio.h>

int main() 
{
    int n; 
    scanf("%d", &n); 
    int a[n][n];
    
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
	{
            printf("%d ", i % 2 == 0 ? j+1 : n-j);
        }
        printf("\n");
    }
}
