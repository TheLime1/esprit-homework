#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "livre.h"
void menu(int *choix)
{
    do
    {
        printf("\n1-Ajouter un livre\n");
        printf("2-Afficher tous les livres\n");
        printf("3-Ajouter un emprunt \n");
        printf("4-Retourner un emprunt \n");
        printf("5-Afficher tous les emprunts retournes\n");
        printf("0-quit\n");
        scanf("%d", choix);
    } while ((*choix < 1) || (*choix > 5));
}
void saisir_livre(Livre * p_livre)
{
    printf("donner le code de livre : \n");
    scanf("%d", &(*p_livre).code);
    printf("donner le nombre d'emprunt: \n");
    scanf("%d", &(*p_livre).nb_exemp);
}


void chercher_livre(Livre t_livres[], int nl, int code_l, int * pos)
{
    int i = 0;
    (*pos) = -1;
    while ((i < nl) && ((*pos) == -1))
    {
        if (t_livres[i].code == code_l)
            (*pos) = i;
        else
            i++;
    }
    printf("pos = %d", *pos);
}

void ajouter_livre(Livre t_livres[], int *nl)
{
    Livre l;
    saisir_livre(&l);
    int pos;

    chercher_livre(t_livres, nl, l.code, &pos);
    if (pos == -1)
    {
        t_livres[*nl] = l;
        (*nl)++;
        printf("ok1");
    }
    else
    {
        t_livres[pos].nb_exemp = t_livres[pos].nb_exemp + l.nb_exemp;
         printf("ok2");
    }
    }
void afficher_livres(Livre t_livres[], int nl)
{
    int i;
    for (i = 0; i < nl; i++)
    {
        printf("le code de livre : %d ", t_livres[i].code);
        printf("nombre demprunt : %d", t_livres[i].nb_exemp);
    }
}
void saisir_emprunt(Emprunt *p_emprunt)
{
    int i;
    printf("donner le numero du livre\n");
    scanf("%d", &p_emprunt->numero);
    printf("donner le code du livre\n");
    scanf("%d", &p_emprunt->code_livre);
    printf("donner le numero du livre\n");
    fflush(stdin);
    gets(p_emprunt->id_abonne);
    p_emprunt->etat = 0;
}

void chercher_emprunt(int num, Emprunt t_emprunts[], int ne, int *pos)
{
    int i = 0;
    (*pos) = -1;
    // printf("saisir le num\n");
    // scanf("%d", &num);
    while ((i < ne) && (*pos == -1))
    {
        if (t_emprunts[i].numero == num)
            (*pos) = i;
        else
            i++;
    }
}

void afficher_emprunts_retournes(Emprunt t_emprunts[], int ne)
{
    int i;
    for (i = 0; i < ne; i++)
    {
        printf("num%d\n", t_emprunts[i].numero);
        printf("code%d\n", t_emprunts[i].code_livre);
        printf("id%d\n", t_emprunts[i].id_abonne);
        printf("etat%d\n", t_emprunts[i].etat);
    }
}
