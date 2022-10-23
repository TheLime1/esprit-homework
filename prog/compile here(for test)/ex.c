#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 5, i, T[10], rech, irech;
    irech = 0;
    for (i = 0; i < n; i++)
    {
        printf("entrez un nombre");
        scanf("%d", &T[i]);
        printf("\n");
        printf("%d", i);
        printf("\n");
    }
    /*affichage*/
    printf("\n");
    for (i = 0; i < n; i++)
    {
        printf("%d", T[i]);
        printf("\t");
    }
}
