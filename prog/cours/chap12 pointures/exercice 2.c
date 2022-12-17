#include <stdio.h>
#include <stdlib.h>

void remplir_tableau(int *tab, int *taille);
void afficher_tableau(int *tab, int taille);
void ajouter_element(int *tab, int *taille, int valeur);
int chercher_element(int *tab, int taille, int valeur);
void modifier_premiere_occurrence(int *tab, int taille, int valeur, int nouvelle_valeur);
void modifier_toutes_occurrences(int *tab, int taille, int valeur, int nouvelle_valeur);

void remplir_tableau(int *tab, int *taille)
{
    printf("Saisissez le nombre d'éléments du tableau : ");
    scanf("%d", taille);

    for (int i = 0; i < *taille; i++)
    {
        printf("Saisissez l'élément numéro %d : ", i + 1);
        scanf("%d", &tab[i]);
    }
}

void afficher_tableau(int *tab, int taille)
{
    printf("Les éléments du tableau sont : ");
    for (int i = 0; i < taille; i++)
    {
        printf("%d ", tab[i]);
    }
    printf("\n");
}

void ajouter_element(int *tab, int *taille, int valeur)
{

    *taille += 1;

    tab[*taille - 1] = valeur;
}

int chercher_element(int *tab, int taille, int valeur)
{
    for (int i = 0; i < taille; i++)
    {
        if (tab[i] == valeur)
        {
            return i;
        }
    }

    return -1;
}
void modifier_premiere_occurrence(int *tab, int taille, int valeur, int nouvelle_valeur)
{
    int position = chercher_element(tab, taille, valeur);
    if (position != -1)
    {

        tab[position] = nouvelle_valeur;
    }
}
void modifier_toutes_occurrences(int *tab, int taille, int valeur, int nouvelle_valeur)
{
    for (int i = 0; i < taille; i++)
    {
        if (tab[i] == valeur)
        {

            tab[i] = nouvelle_valeur;
        }
    }
}

int main()
{
    int myArray[100];

    int size = 0;

    int choice = 0;
    do
    {

        printf("\nMenu:\n");
        printf("1. Remplir le tableau\n");
        printf("2. Afficher les éléments du tableau\n");
        printf("3. Ajouter un élément au tableau\n");
        printf("4. Rechercher un élément dans le tableau\n");
        printf("5. Modifier la première occurrence d'un élément dans le tableau\n");
        printf("6. Modifier toutes les occurrences d'un élément dans le tableau\n");
        printf("7. Quitter\n");
        printf("\nChoix : ");

        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            remplir_tableau(myArray, &size);
            break;
        case 2:
            afficher_tableau(myArray, size);
            break;
        case 3:
            printf("Saisissez la valeur à ajouter : ");
            int valeur;
            scanf("%d", &valeur);
            ajouter_element(myArray, &size, valeur);
            break;
        case 4:
            int valeur, nouvelle_valeur;
            printf("Saisissez la valeur à chercher : ");
            scanf("%d", &valeur);
            printf("Saisissez la nouvelle valeur : ");
            scanf("%d", &nouvelle_valeur);
            modifier_toutes_occurrences(tab, taille, valeur, nouvelle_valeur);
            break;
        case 5:
            break;
        case 6:
            break;
        case 7:
            break;
        }
    }
}
