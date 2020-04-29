#include <stdio.h>

void main()
{
    int x[5], i, j;
    for (i=0; i<5; i++)
    {
        scanf("%i", &x[i]);
    }
    for (i=0; i<5; i++)
    {
        if (x[i]!=42)
        {
            printf("\n%i", x[i]);
        }
        else
        {
            break;
        }
    }

return 0;
}
