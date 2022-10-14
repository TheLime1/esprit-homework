#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, m = 5, n = 5, o = 5, p = 5, M1[m][n], M2[o][p], MT[m][n];

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("entrez un nombre");
            scanf("%d", &M1[i][j]);
            printf("\n");
        }
    }

    for (i = 0; i < o; i++)
    {
        for (j = 0; j < p; j++)
        {
            printf("entrez un nombre");
            scanf("%d", &M2[i][j]);
            printf("\n");
        }
    }

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            MT[i][j] = M1[i][j] + M2[i][j];
        }
    }

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d", MT[i][j]);
            printf("\t");
        }
    }
}