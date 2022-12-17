#include <stdio.h>
#include <stdlib.h>

void remplir_tableau(int *tab, int *taille);
void afficher_tableau(int *tab, int taille);
void ajouter_element(int *tab, int *taille, int valeur);
int chercher_element(int *tab, int taille, int valeur);
void modifier_premiere_occurrence(int *tab, int taille, int valeur, int nouvelle_valeur);
void modifier_toutes_occurrences(int *tab, int taille, int valeur, int nouvelle_valeur);

// Remplit le tableau avec des valeurs saisies par l'utilisateur.
// La fonction demande à l'utilisateur de saisir le nombre d'éléments à remplir.
// Le tableau et sa taille sont passés en paramètres.
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

// Affiche les éléments du tableau.
// Le tableau et sa taille sont passés en paramètres.
void afficher_tableau(int *tab, int taille)
{
    printf("Les éléments du tableau sont : ");
    for (int i = 0; i < taille; i++)
    {
        printf("%d ", tab[i]);
    }
    printf("\n");
}

// Ajoute un élément au tableau.
// Le tableau, sa taille et la valeur à ajouter sont passés en paramètres.
// La fonction met à jour la taille du tableau pour refléter l'ajout de l'élément.
void ajouter_element(int *tab, int *taille, int valeur)
{
    // On augmente la taille du tableau pour ajouter l'élément.
    *taille += 1;
    // On ajoute la valeur à la fin du tableau.
    tab[*taille - 1] = valeur;
}

// Recherche un élément dans le tableau.
// Le tableau, sa taille et la valeur à chercher sont passés en paramètres.
// La fonction retourne la position de l'élément s'il est trouvé, ou -1 sinon.
int chercher_element(int *tab, int taille, int valeur)
{
    for (int i = 0; i < taille; i++)
    {
        if (tab[i] == valeur)
        {
            return i;
        }
    }

    // L'élément n'a pas été trouvé.
    return -1;
}
void modifier_premiere_occurrence(int *tab, int taille, int valeur, int nouvelle_valeur)
{
    int position = chercher_element(tab, taille, valeur);
    if (position != -1)
    {
        // L'élément a été trouvé, on modifie la valeur à cette position.
        tab[position] = nouvelle_valeur;
    }
}
void modifier_toutes_occurrences(int *tab, int taille, int valeur, int nouvelle_valeur)
{
    for (int i = 0; i < taille; i++)
    {
        if (tab[i] == valeur)
        {
            // L'élément correspond à la valeur recherchée, on modifie sa valeur.
            tab[i] = nouvelle_valeur;
        }
    }
}

int main()
{
    // Array to hold the values.
    int myArray[100];
    // The size of the array.
    int size = 0;

    // Loop until the user chooses to exit.
    int choice = 0;
    do
    {
        // Print the menu.
        printf("\nMenu:\n");
        printf("1. Remplir le tableau\n");
        printf("2. Afficher les éléments du tableau\n");
        printf("3. Ajouter un élément au tableau\n");
        printf("4. Rechercher un élément dans le tableau\n");
        printf("5. Modifier la première occurrence d'un élément dans le tableau\n");
        printf("6. Modifier toutes les occurrences d'un élément dans le tableau\n");
        printf("7. Quitter\n");
        printf("\nChoix : ");

        // Read the user's choice.
        scanf("%d", &choice);

        // Handle the user's choice.
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