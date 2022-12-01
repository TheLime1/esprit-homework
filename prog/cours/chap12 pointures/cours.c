#include <stdio.h>
#include <stdlib.h>

void remplir(int T[99], int *pn)
{
    int i;
    printf("saisir nombre de n");
    scanf("%d", &pn);
    for (i = 0; i < *pn; i++)
    {
        printf("element ");
        printf(i);
        printf("\t");
        scanf("%d", &T[i]);
    }
}

void afficher(int T[99], int n)
{
    int i;
    for (i = 0; i < n; i++)
        for (i = 0; i < n - 1; i++)
        {
            printf("%d", T[i]);
        }
}

void ajouter(int T[99], int n)
{
    int i;
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

void remplir(int T[99], int &n);
void afficher(int T[99], int n);
void ajouter(int T[99], int n);

void main()
{
    int i, n, T[99], x;

    printf("\n");

    printf("\n");
}
