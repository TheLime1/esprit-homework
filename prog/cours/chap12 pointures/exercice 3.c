#include <stdio.h>
#include <stdlib.h>

void union(int El[], int nl, int E2[], int n2, int result[])
{
    int i, j, k;

    i = j = k = 0;
    while (i < nl && j < n2)
    {
        if (El[i] < E2[j])
        {
            result[k++] = El[i++];
        }
        else if (E2[j] < El[i])
        {
            result[k++] = E2[j++];
        }
        else
        {
            result[k++] = El[i++];
            j++;
        }
    }
    while (i < nl)
    {
        result[k++] = El[i++];
    }
    while (j < n2)
    {
        result[k++] = E2[j++];
    }
}

void intersection(int El[], int nl, int E2[], int n2, int result[])
{
    int i, j, k;

    i = j = k = 0;
    while (i < nl && j < n2)
    {
        if (El[i] < E2[j])
        {
            i++;
        }
        else if (E2[j] < El[i])
        {
            j++;
        }
        else
        {
            result[k++] = El[i++];
            j++;
        }
    }
}

void fusion(int El[], int nl, int E2[], int n2, int result[])
{
    int i, j, k;

    i = j = k = 0;
    while (i < nl && j < n2)
    {
        if (El[i] < E2[j])
        {
            result[k++] = El[i++];
        }
        else
        {
            result[k++] = E2[j++];
        }
    }
    while (i < nl)
    {
        result[k++] = El[i++];
    }
    while (j < n2)
    {
        result[k++] = E2[j++];
    }
}

int main()
{
    int nl, n2;
    int i;

    // Saisir la taille et les éléments de El
    printf("Entrez la taille de El : ");
    scanf("%d", &nl);
    int El[nl];
    printf("Entrez les éléments de El : ");
    for (i = 0; i < nl; i++)
    {
        scanf("%d", &El[i]);
    }

    // Saisir la taille et les éléments de E2
    printf("Entrez la taille de E2 : ");
    scanf("%d", &n2);
    int E2[n2];
    printf("Entrez les éléments de E2 : ");
    for (i = 0; i < n2; i++)
    {
        scanf("%d", &E2[i]);
    }

    int unionResult[nl + n2];
    int intersectionResult[nl]; // Taille maximale de l'intersection
    int fusionResult[nl + n2];
    union(El, nl, E2, n2, unionResult);
    intersection(El, nl, E2, n2, intersectionResult);
    fusion(El, nl, E2, n2, fusionResult);

    printf("Union : { ");
    for (i = 0; i < nl + n2; i++)
    {
        printf("%d ", unionResult[i]);
    }
    printf("}\n");

    printf("Intersection : { ");
    for (i = 0; i < nl; i++)
    {
        if (intersectionResult[i] > 0) // On ne veut pas afficher les éléments nuls
        {
            printf("%d ", intersectionResult[i]);
        }
    }
    printf("}\n");

    printf("Fusion : { ");
    for (i = 0; i < nl + n2; i++)
    {
        printf("%d ", fusionResult[i]);
    }
    printf("}\n");

    return 0;
}
