#include <stdio.h>
#include <string.h>

typedef struct
{
    int jj;
    int mm;
    int yyyy;
} date;

typedef struct
{
    char dest;
    date date;
} voyage;

typedef struct
{
    int id;
    char nom[20];
    char prenom[20];
    int nv;
    voyage voyage[100];
} client;

main()
{
    int i, n, j, choix;
    client client[100];
    printf("saisir nombre des clients");
    scanf("%d", &n);
    for (i = 0; i < n - 1; i++)
    {
        printf("sasir id\t");
        scanf("%d", &client[i].id);
        printf("sasir nom\t");
        scanf("%s", client[i].nom);
        printf("sasir prenom\t");
        scanf("%s", client[i].prenom);
        printf("sasir nombre de voyage\t");
        scanf("%d", &client[i].nv);
        for (j = 0; j < (client[i].nv) - 1; j++)
        {
            printf("entrez la destination de la voyage %d", j);
            scanf("%s", &client[i].voyage[j].dest);
            printf("entrez la date de la voyage %d", j);
            printf("entrez jour");
            scanf("%d", &client[i].voyage[j].date.jj);
            printf("enter mois");
            scanf("%d", &client[i].voyage[j].date.mm);
            printf("enter anne");
            scanf("%d", &client[i].voyage[j].date.yyyy);
        }

        do
        {
            printf("1-* afficher le tableau des clients  \n");
            printf("2-* trie les voyages selon l'ordre croissant \n");
            printf("3-* afficher las voyageur plus fidel");
            printf("4-* la destination la plus demande\n");
            printf("5-* afficher le mois de lanne avec le plus grand nombre de resevation\n");
            printf("0-* quitter");

            do
            {
                printf("choisir un choix\n");
                scanf("%d", &choix);
            } while (choix < 2 && choix > 5);

            switch (shoix)
            {
            case 1:
                printf(client[i].id);
                printf("\n");
                printf(client[i].nom);
                printf("\n");
                printf(client[i].prenom);
                printf("\n");
                printf(client[i].nv);
                printf("\n");
                for (j = 0; j < (client[i].nv) - 1; j++)
                {
                    print("les info de voyage %d", j);
                    printf("\n");
                    scanf("%s", &client[i].voyage[j].dest);
                    printf("\n");
                    printf(client[i].voyage[j].date.jj);
                    printf("  ");
                    printf(client[i].voyage[j].date.mm);
                    printf("  ");
                    printf(client[i].voyage[j].date.yyyy);
                }
                break;

            default:
                break;
            }

        } while (choix != 0);
    }

    return 0;
}