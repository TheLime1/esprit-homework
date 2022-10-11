#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 5, i, T[n], rech, irech;
    irech = 0;
    for (i = 0; i < n; i++)
    {
        printf("entrez un nombre");
        scanf("%d", &T[i]);
        printf("\n");
        printf("%d", i);
        printf("\n");
    }
    /*recherche*/
    printf("\n");
    printf("donner un entier (recherche)");
    scanf("%d", &rech);
    for (i = 0; i < n; i++)
    {
        if (rech == T[i])
        {
            irech = irech + 1;
        }
    }
    printf("le nombre de fois doccurence de lentier   ");
    printf("%d", irech);
    /*affichage*/
    printf("\n");
    for (i = 0; i < n; i++)
    {
        printf("%d", T[i]);
        printf("\t");
    }

    /*supprimer*/
    for (i = 0; i < n; i++)
    {
        T[i] = T[i + 1];
    }
}
