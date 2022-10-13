#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 10, i, T[n], indice = 0, count = 0, j, score = 0, final, max;

    /* remplire*/
    for (i = 0; i < n; i++)
    {
        printf("entrez un nombre");
        scanf("%d", &T[i]);
        printf("\n");
    }
    for (i = 0; i < n; i++)
    {
        for (j = i; j < n; j++)
        {
            indice = T[i];
            if (T[i] < T[i + 1]) /*chaange made here */
            {
                score = score + 1;
                if (max < score)
                {
                    final = indice;
                    max = score;
                }
            }
        }
    }
    printf("indice %d\n", final);
}
