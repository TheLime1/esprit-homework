#include <stdio.h>
#include <stdlib.h>

void main()
{
    int i, j, rayon, produit, choix, on_off = 0;
    int rayon1, produit1, produitQ;
    int T[100][100], tot[100][100], total = 0;

    printf("donner le nombre de rayon :\n");
    scanf("%d", &rayon);

    printf("donner le nombre de type de produits:\n");
    scanf("%d", &produit);

    for (i = 0; i < rayon; i++)
    {
        for (j = 0; j < produit; j++)
        {
            printf("entre la quantite presente de produit:\n");
            scanf("%d", produitQ);
            T[rayon][produit] = produitQ;
        }
    }
    do
    {
        do
        {
            printf("1- mettre a jour la quantite dun produit donne dans un rayon donne  :\n");
            printf("2-calculer et afficher la quantite de chaque produit :\n");
            printf("3- saisir le prix unitaire de chaque produit:\n");
            printf("4-calculer et sotcker dans un tableau a part le prix total des produit :\n");
            printf("5-supprimer du tableau des prix totaux toutes les cases ayant un prix egal a zero : \n");
            printf("6-trier le tableau et recherche dun element : \n");
            printf("0-quitte");
            scanf("%d", &choix);
        } while ((choix <= 1) || (choix >= 6));
        switch (choix)
        {
        case 1:
            do
            {
                printf("donner rayon : \n");
                scanf("%d", &rayon1);
                printf("donner produit: \n");
                scanf("%d", &produit1);
                printf("donner nouvelle quantite: \n");
                scanf("%d", &produitQ);
                T[rayon1][produit1] = produitQ;
                printf("modify more ? : Oui:1\t Non:0\n");
                scanf("%d", &on_off);
            } while (on_off == 1);
            break;
        case 2:
        {
            printf("prix total de chaque produit:\n");
            for (i = 0; i < rayon; i++)
            {
                for (j = 0; j < produit; j++)
                {
                    printf("entre la quantite presente de produit:\n");
                    scanf("%d", produitQ);
                    total = T[produit][rayon] + total;
                }
                printf("%d", total);
                printf("\t");
                total = 0
            }
        }
        case 3:
        {
                }

        default:
            break;
        }

    } while (choix != 0)
