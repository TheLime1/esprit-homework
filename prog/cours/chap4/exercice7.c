#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, k, l n = 5, T[n][n], total, rule = 0;

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
        for (j = 0; j < n; j++)
        {
            for (k = 0; k < n; k++)
            {
                if (T[i][j] < T[i][k])
                {
                    rule = rule + 1;
                }
                else
                {
                    rule = rule - 1;
                }
            }
            for (k = 0; k < n; k++)
            {
                if (T[i][j] < T[l][j])
                {
                    rule = rule + 1;
                }
                else
                {
                    rule = rule - 1;
                }
            }
        }
        if (rule == 2)
        {
            printf("ilya points.cols")
        }
    }
}