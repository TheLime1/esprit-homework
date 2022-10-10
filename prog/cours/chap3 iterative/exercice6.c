#include <stdio.h>

void main()
{
    int baton = 23, J1, J2, i; // change number of baton
    for (i = 1; i < baton; i++)
    {
        printf("I");
    }
    printf("\n");
    while (baton > 0)
    {
        printf("joueur 1, entrez le nombre de batons a tirer");
        scanf("%d", J1);
        baton = baton - J1;
        for (i = 1; i < baton; i++)
        {
            printf("I");
        }
        printf("\n");
        printf("joueur 2, entrez le nombre de batons a tirer");
        scanf("%d", J2);
        baton = baton - J2;
        for (i = 1; i < baton; i++)
        {
            printf("I");
        }
        printf("\n");
    }
}
