#include <stdio.h>

int main()
{
    int i=0, np=0;		//np = ne probel 
    char c;

    while((c=getchar())!=-1)
    {
        if (c!=' ') 
        {
            if (i-np>1) printf(" ");
            printf("%c", c);
            np = i;
        }
        i++;
    }
}
