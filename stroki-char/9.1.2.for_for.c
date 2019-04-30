#include <stdio.h>

int main(void)
{
    int n; scanf("%d\n", &n);
    int arr[n];
    char k;
    int sum = 0;

    for(int i = 0 ; i < n; i++) 
    {
        scanf(" %c", &k);
        if(k<97) 
	{
            k+=32;
        }
        arr[i] = k;
    }

    for(int i = 97; i  < 123; i++) 
    {
        for( int j = 0; j < n; j++) 
	{
            if( i == arr[j]) 
	    {
                ++sum;
            }
        }
        printf("%d ", sum);
        sum = 0;
    }

    return 0;
}

