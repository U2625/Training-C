#include <stdio.h>
#include <string.h>

int main()
{
    int i, start=0, stop=0;
    char c, str[100];
    
    fgets(str, 100, stdin);

    for (i=0; i<(strlen(str)-1); i++)
    {
        if (str[i]!=' ') 
        {
            if ((i==0)||(str[i-1]==' '))
            {
                start = i;
            }
            
            if ((str[i+1]=='\n')||(str[i+1]==' '))
            {
                stop = i;
            }
            
            if ((str[start]==str[stop])&&(stop-start>0))
            {
                printf("%.*s ", stop-start+1, str+start);
            }
        }
    }
    //printf("%*.*s", length, length, "hello there");
    //the first * just means that a sub-length string will be padded to length characters
}
