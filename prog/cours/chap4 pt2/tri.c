#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 5, i, j, T1[10], T2[10], permute, aux, min, T3[20];

    printf("table 1\n");
    for (i = 0; i < n - 1; i++)
    {
        printf("entrez un nombre");
        scanf("%d", &T1[i]);
        printf("\n");
        printf("%d", i);
        printf("\n");
    }
    do
    {
        permute = 0;
        for (i = 0; i < n - 1; i++)
        {
            min = i;

            if (T1[j] < T1[min])
            {

                aux = T1[i];
                T1[i] = T1[min];
                T1[min] = aux;
                permute = 1;
            }
        }
    } while (permute == 1);

    printf("table 2\n");
    for (i = 0; i < n - 1; i++)
    {
        printf("entrez un nombre");
        scanf("%d", &T2[i]);
        printf("\n");
        printf("%d", i);
        printf("\n");
    }
    do
    {
        permute = 0;
        for (i = 0; i < n - 1; i++)
        {
            min = i;

            if (T2[j] < T2[min])
            {

                aux = T2[i];
                T2[i] = T2[min];
                T2[min] = aux;
                permute = 1;
            }
        }
    } while (permute == 1);

    /*affichage*/
    printf("\n");
    printf("table 1\n");
    for (i = 0; i < n - 1; i++)
    {
        printf("%d", T1[i]);
        printf("\t");
    }

    /*affichage*/
    printf("\n");
    printf("table 2\n");
    for (i = 0; i < n - 1; i++)
    {
        printf("%d", T2[i]);
        printf("\t");
    }

    /*T3*/
    while (e)
    {
        /* code */
    }
}
