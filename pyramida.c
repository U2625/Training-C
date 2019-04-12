#include <stdio.h>

int main()
{
        int a;
        int i,j=0;
        scanf("%d", &a);
        for(i=1; i<=a; i++)  //кол строк
        {
            for(j=1; j<=i; j++)  //колв строке
                printf("%d ", j);
                printf("\n");
        }

        return 0;
}

