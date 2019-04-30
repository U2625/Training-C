#include <stdio.h>

int main() 
{
    int n;
    char c;
    scanf("%d ", &n);
    int a[26] = {0};
    for (int i = 0; i < n; i++) 
    {
        scanf("%c ", &c);
        a[c%65%32] += 1;	//objedinili [65-90] i [97-122]
    }
    for (int i = 0; i < 26; i ++) 
        printf("%d ", a[i]);
}
