#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "machinpann.h"

void menu(int *choix)
{
    do
    {
        printf("1-ajouter machine\n");
        printf("2-ajouter panne \n");
        printf("3-total du panne\n");
        printf("4-modifier etat du panne \n");
        printf("5-afficher  \n");
        printf("6-supprimer \n");
        printf("saisir votre choix\n");
        scanf("%d", &*choix);
    } while ((*choix < 1) || (*choix > 7));
}
void saisir(machine *m)
{
    int i;
    printf("donner la reference :\n");
    scanf("%d", &(*m).ref);
    for (i = 0; i < 10; i++)
    {
        strcpy((*m).liste[i].reference, "\0");
    }
}
void ajouter(machine Tm[], machine m, int *n)
{
    saisir(&m);
    Tm[*n] = m;
    (*n)++;
}
int rechercherMach(machine Tm[], int n, int ref)
{
    int i = 0, trouve = 0;
    do
    {
        if (ref == Tm[i].ref)
            trouve = 1;
        else
            i++;
    } while (trouve == 0 && i < n);
    if (trouve == 1)
        return i;
    else
        return -1;
}
void saisirpanne(panne *p)
{
    printf("Entrez la refrence de la panne : \n");
    fflush(stdin);
    gets((*p).reference);
    printf("Entrez l'etat (1 repar� 0 non repar� ) \n");
    scanf("%d", &(*p).etat);
}
void ajouterpanne(int ref, machine Tm[], int n, panne p)
{
    int i = 0, test = 0;

    if (rechercherMach(Tm, n, ref) == -1)
    {
        printf("n'existe pas\n");
    }

    else
    {
        do
        {
            if (!strcmp(Tm[rechercherMach(Tm, n, ref)].liste[i].reference, "\0"))
                test = 1;
            else
                i++;
        } while (i < 10 && test == 0);
        if (test == 0)
            printf("plusieurs pannes\n");
        else
        {
            saisirpanne(&p);
        }
        int totalPanne(int ref, machine Tm[], int n)
        {
            int i = 0, test = 0, z;
            if (rechercherMach(Tm, n, ref) == -1)
            {
                return -1;
            }
            else
            {
                z = rechercherMach(Tm, n, ref);
                do
                {
                    if (strcmp(Tm[z].liste[i].reference, "\n"))
                    {
                        i++;
                    }
                    else
                        test = 1;
                } while (i < 10 && test == 0);
                if (test == 1)
                    return i;
                else
                    return 0;
            }
        }
    }
}
void modifier_etat_panne(int ref, machine Tm[], int n)
{
    int i = 0, test = 0, z, x, panne;
    if (rechercherMach(Tm, n, ref) == -1)
    {
        printf("n'existe pas\n");
    }
    else
    {
        if (totalPanne(ref, Tm, n) == 0)
        {
            printf("pas de pannes\n");
        }
        else
        {
            x = totalPanne(ref, Tm, n);
            z = rechercherMach(Tm, n, ref);
            for (i = 0; i < x; i++)
            {
                if (Tm[z].liste[i].etat == 1)
                {
                    printf("panne repar��\n");
                }
                else
                {
                    Tm[z].liste[i].etat = 1;
                }
            }
        }
    }
}
void afficher(int n, machine Tm[], int ref)
{
    int i;
    if (rechercherMach(Tm, n, ref) == -1)
    {
        printf("n'existe pas\n");
    }
    else
    {
        if (totalPanne(ref, Tm, n) == 0)
            printf(" pas des pannes  \n ");
        else
        {
            for (i = 0; i < totalPanne(ref, Tm, n); i++)
            {
                printf("la reference : %s \n", Tm[rechercherMach(Tm, i, ref)].liste[i].reference);
                if (Tm[rechercherMach(Tm, i, ref)].liste[i].etat == 0)
                {
                    printf(" non reparee \n");
                }
                else
                    printf("  reparee \n");
            }
        }
    }
}
void trouver(machine Tm[], int n, int *n_rep, int *n_nrep, int ref)
{
    int i;
    if (rechercherMach(Tm, n, ref) == -1)
    {
        printf("n'existe pas\n");
    }
    else
    {
        for (i = 0; i < totalPanne(ref, Tm, n); i++)
        {
            if (Tm[rechercherMach(Tm, n, ref)].liste[i].etat == 0)
            {
                (*n_nrep)++;
            }
            else
                (*n_rep)++;
        }
    }
}
void supprimer(machine Tm[], int *n)
{
    int i, j, n_rep, n_nrep;
    for (i = 0; i < *n; i++)
    {
        n_rep = 0;
        n_nrep = 0;
        trouver(Tm, *n, &n_rep, &n_nrep, Tm[i].ref);
        if (n_rep == totalPanne(Tm[i].ref, Tm, *n))
        {
            for (j = i; j < (*n) - 1; j++)
                Tm[j] = Tm[j + 1];
            (*n)--;
            i--;
        }
    }
}
