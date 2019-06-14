#include <stdio.h>

void print();
const int n=6;
int a[6][6];
int main()
{
int counter = 1;
    for (int m = n; m > 0; m--)
    {
        int j=n-m,i=0;
        for(i=n-m; i<m; i++)
        {
            a[i][j]=counter;
            counter++;
        }
        counter--;
        for(int k=n-m; k<m; k++)
        {
            a[m-1][k]=counter;
            counter++;
        }
        counter--;
        for(i=m-1; i>=n-m; i--)
        {
            a[i][m-1]=counter;
            counter++;
        }
        counter--;
        for(j=m-1; j>n-m; j--)
        {
            a[n-m][j]=counter;
            counter++;
        }
    }
    print();
    return 0;
}

void print ()
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {

            printf("%3d ", a[i][j]);
        }
        printf("\n");
    }
}
