#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 5, i, T[10][10], rech, irech, j;
    irech = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("entrez un nombre");
            scanf("%d", &T[i][j]);
            printf("\n");
            printf("%d", i);
            printf("\n");
        }
    }
    /*recherche*/
    printf("\n");
    printf("donner un entier (recherche)");
    scanf("%d", &rech);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (rech == T[i][j])
            {
                irech = irech + 1;
            }
        }
    }
    printf("le nombre de fois doccurence de lentier   ");
    printf("%d", irech);
    /*affichage*/
    printf("\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d", T[i][j]);
            printf("\t");
        }
        printf("\n") ;
    }
}
