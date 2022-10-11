#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T[15], i, ajout, pos, n, aux, cell;
    n = 10;
    printf("saisir nombre a ajoute");
    scanf("%d", &ajout);
    printf("saisir position");
    scanf("%d", &pos);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &cell);
        T[i] = cell;
        printf("\n");
    }
    for (i = pos; i < n; i++)
    {
        T[i] = T[i + 1];
    }
    T[pos] = ajout;
    printf("cbon");
    for (i = 0; i < 15; i++)
    {
        printf(T[i]);
        printf("\n");
    }
}
