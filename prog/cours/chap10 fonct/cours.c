#include <stdio.h>
#include <stdlib.h>

int remplir(int T[99], n);
int affichage(int T[99], n);

void remplir(int T[99], n)
{
    for (i = 0; i < n; i++)
    {
        scanf("%d", &T[i]);
    }
}

void affichage(int T[99], n)
{
    for (i = 0; i < n; i++)
    {
        printf("%d ", &T[i]);
        printf("\t");
    }
}

void main()
{
    int i, n;
    int T[99];
    scanf("%d", &n);
    remplir(T[99]);
    affichage();
}