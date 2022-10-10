#include <stdio.h>
#include <stdlib.h>

void main()
{
    int i, nbr1, nbr2;

    scanf("%d", &nbr1);
    scanf("%d", &nbr2);
    for (i = nbr1; i < nbr2; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d", i);
            printf("\n");
        }
    }
}
