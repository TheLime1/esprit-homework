#include "fich.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void saisirAd(adherent)
{
    int n, i;

    printf("donner nombre de adherents\n");
    for (i = 0; i < n; i++)
    {
        printf("donner ID\n");
        scanf("%d", &adherent[i].id);
        printf("donner nom\n");
        scanf("%s", &adherent[i].nom);
        printf("donner prenom\n");
        scanf("%s", &adherent[i].prenom);
        printf("donner plafond\n");
        scanf("%f", &adherent[i].prenom);
        return n
    }
}

int ajouterAd(int n)
{
    int choice = 1;
    int i = n;
    do
    {
        i++;
        printf("donner ID\n");
        scanf("%d", &adherent[i].id);
        printf("donner nom\n");
        scanf("%s", &adherent[i].nom);
        printf("donner prenom\n");
        scanf("%s", &adherent[i].prenom);
        printf("donner plafond\n");
        scanf("%f", &adherent[i].prenom);
        printf("\n ajouter un autre adherent ? 1:OUI/2:NON");
        scanf("%d", &choice);
        if (choice == 2)
        {
            return i;
        }
    } while (choice == 1)
}

int afficherAd(int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf(adherents[i].id);
        printf("\t");
        printf(adherents[i].nom);
        printf("\t");
        printf(adherents[i].prenom);
        printf("\t");
        printf(adherents[i].plafond);
        printf("\n");
    }
}

constat saisirConsta(adherents adh[], int n)
{
    constat T;
    int id;
    printf("saidir id\n");
    scanf("%d", &id);
    verif(n, id, adh[]);
}

int verif(int n, int id, adherents adh[])
{
    int v;
    int i;

    while (i < n)
    {
        if (adh[i].id == id)
        {
            return 1;
        }
        i++;
    }
    return 0;
}