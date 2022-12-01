#include <stdio.h>
#include <stdlib.h>

void main()
{
    int i, n, T[99], x;
    printf("saisir nombre de n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("element ");
        printf(i);
        printf("\t");
        scanf("%d", &T[i]);
    }
    printf("\n");
    for (i = 0; i < n - 1; i++)
    {
        printf("%d", T[i]);
    }
    printf("\n");
    printf("saisir nombre de cases pour ajouter");
    scanf("%d", &x);
    for (i = n; i < n + x; i++)
    {
        printf("element ");
        printf(i);
        printf("\t");
        scanf("%d", &T[i]);
    }
}
