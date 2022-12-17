#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "campagne.h"

int verifier_exit(aide TA[], int nA, char designation[])
{

    int i = 0;
    int stop = 0;

    while (stop == 0 && i < nA)
    {
        if (strcmp(designation, TA[i].designation) == 0)
        {
            printf("%d est exist");
            stop = 1;
            return i;
        }
        i++;
    }

    return -1;
}

void saisir_aide(aide *A)
{
    int choix = 0;

    printf("saisir designation");
    fflush(stdin);
    gets(*A.designation);
    fflush(stdin);
    do
    {
        gets(*A.type);

    } while (strcmp((*A).type, "couverture") != 0 || strcmp((*A).type, "alimentaire") != 0 || strcmp((*A).type, "couverture") != 0);
    scanf("%d", &(*A).quantity);
}

void ajouter_aide(aideTA[], int *nA, aide A);
{
    printf("ajouter =\n");
    TA[*nA] = *A;
    (*nA)++;
    // TODO: fix this
}

void afficher_aide(aide TA[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        printf("Aide %d :\n", i + 1);
        printf("Designation = ");
        puts(TA[i].designation);
        printf("type = ");
        puts(TA[i].type);
        printf("Quantite disponible = %d \n", TA[i].quatite_dispo);
    }
}
remplir_famille(famille TF[], int nF)
{
}

void remplir_famille(famille TF[], int nF);
void afficher_famille(famille TF[], int nF);
void max_min_aide(aide TA[], intnA, int *min, int *max);
int max_membre(famille TF[], int nF);
void supprimer(famille TF[], int *nF, int pos);
void affecter_aide(famille TF[], int *nf, aide TA[], int nA);
void controler_stock(aide TA[], int nA, aide TStock[], int *nS);