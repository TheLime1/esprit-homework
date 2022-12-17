#include <stdio.h>
#include <string.h>

typedef struct
{
    int numero;
    char nom[100];
    char prenom[100];
    int age;
    char classe[100];
} Etudiant;

void permuterChaines(char *chaine1, char *chaine2)
{
    char temp[100];
    strcpy(temp, chaine1);
    strcpy(chaine1, chaine2);
    strcpy(chaine2, temp);
}

void saisirEtudiant(Etudiant *etudiant)
{
    printf("Saisissez le numéro de l'étudiant : ");
    scanf("%d", &etudiant->numero);
    printf("Saisissez le nom de l'étudiant : ");
    scanf("%s", etudiant->nom);
    printf("Saisissez le prénom de l'étudiant : ");
    scanf("%s", etudiant->prenom);
    printf("Saisissez l'âge de l'étudiant : ");
    scanf("%d", &etudiant->age);
    printf("Saisissez la classe de l'étudiant : ");
    scanf("%s", etudiant->classe);
}

void permuterEtudiants(Etudiant *etudiant1, Etudiant *etudiant2)
{
    permuterChaines(etudiant1->classe, etudiant2->classe);
}

int main()
{
    Etudiant etudiant1, etudiant2;

    printf("Saisie des informations de l'étudiant 1:\n");
    saisirEtudiant(&etudiant1);

    printf("\nSaisie des informations de l'étudiant 2:\n");
    saisirEtudiant(&etudiant2);

    permuterEtudiants(&etudiant1, &etudiant2);

    printf("\nInformations de l'étudiant 1 après permutation :\n");
    printf("Numéro : %d\n", etudiant1.numero);
    printf("Nom : %s\n", etudiant1.nom);
    printf("Prénom : %s\n", etudiant1.prenom);
    printf("Age : %d\n", etudiant1.age);
    printf("Classe : %s\n", etudiant1.classe);

    printf("\nInformations de l'étudiant 2 après permutation :\n");
    printf("Numéro : %d\n", etudiant2.numero);
    printf("Nom : %s\n", etudiant2.nom);
    printf("Prénom : %s\n", etudiant2.prenom);
    printf("Age : %d\n", etudiant2.age);
    printf("Classe : %s\n", etudiant2.classe);

    return 0;
}