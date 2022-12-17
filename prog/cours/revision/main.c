#include <stdio.h>
#include <stdlib.h>

typedef struct Ingredient
{
    char des[100];
    int qte;
    float prix;
} ingredient;

typedef struct Gateau
{
    int type;
    int nbIng;
    ingredient TabIng[100];
} gateau;

// déclaration des fonctions
void saisir(gateau *g);
void ajouterGateau(gateau tabG[], gateau g, int *tg);
void afficher(gateau tabG[], int tg);
void trouver(gateau tabG[], int tg, int type, int *pos);
float calculerPrix(gateau g);
void initialiser(int matV[][7], float tabP[]);
void vendre(int matV[][7], gateau tabG[], int type, int jour, int *tg, float tabP[]);
void afficherRecette(int matV[][7], int jour, float tabP[]);
float calculerPrix(gateau g)
{
    float cout = 0, prix;
    int i;
    for (i = 0; i < g.nbIng; i++)
    {
        cout = cout + g.TabIng[i].qte * g.TabIng[i].prix;
    }
    switch (g.type)
    {
    case 0:
        prix = cout * 1.1;
        break;
    case 1:
        prix = cout * 1.15;
        break;
    case 2:
        prix = cout * 1.2;
        break;
    }
    return prix;
}

void initialiser(int matV[][7], float tabP[])
{
    int i, j;
    for (i = 0; i < 3; i++)
        for (j = 0; j < 7; j++)
            matV[i][j] = 0;

    for (i = 0; i < 7; i++)
        tabP[i] = 0;
}

void vendre(int matV[][7], gateau tabG[], int type, int jour, int *tg, float tabP[])
{
    int pos, i;
    float prix;
    trouver(tabG, *tg, type, &pos);
    if (pos == -1)
        printf("type de gateau introuvable \n");
    else
    {
        // calculer son prix de vente et
        prix = calculerPrix(tabG[pos]);
        // mettre à jour le tableau de chiffre d'affaire tabP
        tabP[jour - 1] = tabP[jour - 1] + prix;
        // mettre à jour la matrice tabV
        matV[type][jour - 1]++;
        // supprimer le gâteau du tableau tabG
        for (i = pos; i < *tg; i++)
            tabG[i] = tabG[i + 1];
        (*tg)--;
    }
}

void afficherRecette(int matV[][7], int jour, float tabP[])
{
    printf("Recette du jour:%f \n", tabP[jour - 1]);
    printf("Nombre de gateaux vendus: Chocolat est %d \n", matV[0][jour - 1]);
    printf("Nombre de gateaux vendus: Chocolat est %d \n", matV[1][jour - 1]);
    printf("Nombre de gateaux vendus: Chocolat est %d \n", matV[2][jour - 1]);
}

// fonction Menu
int menu()
{
    int choix;

    do
    {
        printf("Veuillez saisir votre choix :\n");
        printf("1: Ajouter un gateau\n");
        printf("2: Afficher tous les gateaux\n");
        printf("3: Calculer le prix d'un gateau\n");
        printf("4: Vendre un gateau\n");
        printf("5: Afficher la recette d'un jour donne\n");
        printf("0: Quitter\n");

        scanf("%d", &choix);
    } while ((choix < 0) || (choix > 5));

    return choix;
}

// fonction principale main

int main()
{ // déclaration des variables
    gateau g;
    float prix;
    gateau tabG[50];
    int tg = 0, pos, type, choix, jour;
    int matV[3][7];
    float tabP[7];
    initialiser(matV, tabP);
    do
    {
        choix = menu();
        switch (choix)
        {
        case 1:
            saisir(&g);
            ajouterGateau(tabG, g, &tg);
            break;

        case 2:
            afficher(tabG, tg);
            break;

        case 3:
            printf("Type (0:choco, 1:nougatine, 2:pstache): ");
            scanf("%d", &type);
            trouver(tabG, tg, type, &pos);

            printf("Calcul de prix d'aun gateau");
            saisir(&g);
            prix = calculerPrix(g);
            printf("Le prix est: %f", prix);
            break;

        case 4:
            printf("Type (0:choco, 1:nougatine, 2:pstache): ");
            scanf("%d", &type);
            printf("Jour: (0:lundi, 1:mardi, 2:mercredi....): ");
            scanf("%d", &jour);
            vendre(matV, tabG, type, jour, &tg, tabP);

            break;

        case 5:
            printf("Jour: (0:lundi, 1:mardi, 2:mercredi....): ");
            scanf("%d", &jour);
            afficherRecette(matV, jour, tabP);
            break;
        }
    } while (choix != 0);
    return 0;
}