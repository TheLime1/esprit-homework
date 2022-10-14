#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, n = 5, T[n][n], total;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("entrez un nombre");
            scanf("%d", &T[i][j]);
            printf("\n");
        }
    }

    for (i = 0; i < n; i++)
    {
        total = total + T[i][i];
    }
    printf("somme total: %d\n", total);
}