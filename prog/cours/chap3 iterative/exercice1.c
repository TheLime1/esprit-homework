#include <stdio.h>
#include <stdlib.h>

void main()
{
    int i, nbr;
    printf("Enter the number ");
    scanf("%d", &nbr);
    if (nbr != 0)
    {
        for (i = nbr; i > 0; i--)
        {
            nbr = i * nbr;
        }
        printf("%d ", nbr);
    }
    else
    {
        printf("=1");
    };
}
