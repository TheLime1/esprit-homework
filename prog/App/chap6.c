#include <stdlib.h>
#include <stdlio.h>
#include <string.h>

typedef struct
{
    int id;
    char nom[30];
    char prenom[30];
    int repas;
    int hotel;
} participant;

void main()
{
    int i, choix, total, facture = 0, ID, choix3;
    int n = 0;
    participant p[100];
    do
    {
        do
        {
            printf("1-ajout un participant\n");
            printf("2-calculer facture dun participant\n");
            printf("3-afficher les info dun participant\n");
            printf("4-supprimer un participant\n");
            printf("0-qutter\n");

            printf("Enter your choice : ");
            scanf("%d", &choix);
        } while (choix < 0 && choix > 4);

        switch (choix)
        {
        case 1:
            printf("donner un nom\t");
            scanf("%s", &p[i].nom);
            printf("donner un prenom\t");
            scanf("%s", &p[i].prenom);
            printf("donner id");
            scanf("%d", &p[i].id);
            printf("===========================");
            do
            {
                printf("1-dejuner(15Dt)\n");
                printf("2-diner(35Dt)\n");
                printf("3-dejuner + diner(50Dt)\n");
                printf("4-aucun");
                printf("choisir un repas\n");
                scanf("%d", &p[i].repas)

            } while (p[i].repas < 1 && p[i].repas > 4);

            do
            {
                printf("4- 4 etoils(75Dt)\n");
                printf("5- 5 etoils(100Dt)\n");
                printf("choisir un hotel :\n");
                scanf("%d", &p[i].hotel);
            } while (p[i].hotel <= 3 && p[i].hotel >= 5);

            n++;
            break;

        case 2:
            printf("donner ID de la participant\n");
            scanf("%d", &ID);
            facture = 0;
            for (i = 0; i < n; i++)
            {
                if (p[i].id == ID)
                {
                    switch (p[i].hotel)
                    {
                    case 4:
                        facture = facture + 75;
                        break;

                    case 5:
                        facture = facture + 100;
                        break;

                    default:
                        break;
                    }

                    switch (p[i].repas)
                    {
                    case 1:
                        facture = facture + 15;
                        break;
                    case 2:
                        facture = facture + 35;
                        break;
                    case 3:
                        facture = facture + 50;
                        break;
                    case 4:
                        facture = facture + 0;
                        break;
                    }
                }
            }
            else
            {
                printf("il nya pas");
            }
            break;
        // case 3 affichage
        case 3:
        {
            do
            {
                printf("1-afficher touts les participant\n");
                printf("2-afficher les participant (hotel 4 etoils\n");
                printf("3-afficher les participant (hotel 5 etoils\n");

                printf("choisir option:\n");
                scanf("%d", choix3);
            } while (choix3 < 1 && choix3 > 3);
            switch (choix3)
            {
            case 1:
                // afiichage tous les participant
                for (i = 0; i < n; i++)
                {
                    printf("%c", p[i].nom);
                    printf("\n");
                    printf("%c", p[i].prenom);
                    printf("\n");
                    printf("%d", p[i].id);
                    printf("\n");
                    switch (p[i].repas)
                    {
                    case 1:
                        printf("dejuner");
                        break;
                    case 2:
                        printf("diner");
                        break;
                    case 3:
                        printf("dejuner+diner");
                        break;
                    case 4:
                        printf("aucun repas");
                        break;
                    }
                    printf("\n");
                    switch (p[i].hotel)
                    {
                    case 4:
                        printf("4 etoils");
                        break;

                    case 5:
                        printf("5 etoils");
                        break;

                    default:
                        break;
                    }
                }
                printf("\n");
                break;
            case 2:
                // afiichage les participant 4 etoils
                for (i = 0; i < n; i++)
                {
                    if (p[i].hotel == 4)
                    {
                        printf("%c", p[i].nom);
                        printf("\n");
                        printf("%c", p[i].prenom);
                        printf("\n");
                        printf("%d", p[i].id);
                        printf("\n");
                        switch (p[i].repas)
                        {
                        case 1:
                            printf("dejuner");
                            break;
                        case 2:
                            printf("diner");
                            break;
                        case 3:
                            printf("dejuner+diner");
                            break;
                        case 4:
                            printf("aucun repas") break;
                        }

                        printf("\n");
                        switch (p[i].hotel)
                        {
                        case 4:
                            printf("4 etoils");
                            break;

                        case 5:
                            printf("5 etoils");
                            break;
                        }
                    }
                }
            case 3:
                // afiichage les participant 5 etoils
                for (i = 0; i < n; i++)
                {
                    if (p[i].hotel == 5)
                    {
                        printf("%c", p[i].nom);
                        printf("\n");
                        printf("%c", p[i].prenom);
                        printf("\n");
                        printf("%d", p[i].id);
                        printf("\n");
                        switch (p[i].repas)
                        {
                        case 1:
                            printf("dejuner");
                            break;
                        case 2:
                            printf("diner");
                            break;
                        case 3:
                            printf("dejuner+diner");
                            break;
                        case 4:
                            printf("aucun repas") break;
                        }

                        printf("\n");
                        switch (p[i].hotel)
                        {
                        case 4:
                            printf("4 etoils");
                            break;

                        case 5:
                            printf("5 etoils");
                            break;
                        }
                    }
                }

            default:
                break;
            }
        }
            while (choix != 0)
        }
