// TODO:
// menu num 3 ; ajouter personelle ou login

// struct
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char zone[99];
    char id[9];
    char type[20]
} alert;

typedef struct
{
    char username[30];
    char password[30];
    int role;
} personnel;

// funct
void remplire(personnel[99], int n);
int login(personnel TP[99], int n);
void menu_agent();
void menuadmin();

// funct
void remplire(personnel TP[99], int n)
{
    int i = 0;
    for (size_t i = 0; i < n; i++)
    {
        printf("sasir username:\n");
        fflush(stdin);
        gets(TP[i].username);
        printf("sasir password:\n");
        fflush(stdin);
        gets(TP[i].password);
        do
        {
            printf("sasir role: 1-admin /// 2-agent\n");
            scanf("%d", TP[i].role);
        } while (TP[i].role < 1 || TP[i].role > 2);
    }
}
int login(personnel TP[99], int n)
{
    int i = 0;
    char user_rech[99], password_rech[99];
    printf("LOGIN");
    printf("write username\n");
    fflush(stdin);
    gets(user_rech);
    printf("write password");
    fflush(stdin);
    gets(password_rech);
    while (i < n && (strcmp(user_rech, TP[i]) = !0) && (strcmp(password_rech, TP[i]) = !0))
    {
        i++;
    }
    if (i == n)
        return -1;
    else
        return TP[i].role;
}

void menu_agent()
{
    do
    {

        printf("*************MENU************\n");
        printf(" 1: Ajouter une nouvelle alert \n");
        printf(" 2: chercher une alerte \n");
        printf(" 3: afficher une alert donner par un ID \n");
        printf(" 4: modifier une alert donner par un ID \n");
        printf(" 5: supprimer une alert donner par un ID \n");
        printf(" 0: Quitter\n");
        printf("*********************************");
        /// Choose Option
        do
        {
            printf("\nVeuillez saisir votre choix: ");
            scanf("%d", &option);
        } while (option < 1 || option > 5);
        /// Switch Case
        switch (option)
        {
        case 1:

            break;
        }

        printf("\n");
    } while (opt != 0);
}

void menu_admin();
{
    do
    {

        printf("*************MENU************\n");
        printf(" 1: afficher la liste des alerts \n");
        printf(" 2: afficher la pourcentage des alerts par rapport au nombre  total des alerts \n");
        printf(" 0: Quitter\n");
        printf("*********************************");
        /// Choose Option
        do
        {
            printf("\nVeuillez saisir votre choix: ");
            scanf("%d", &option);
        } while (option < 1 || option > 5);
        /// Switch Case
        switch (option)
        {
        case 1:
            break;
        }
        printf("\n");
    } while (opt != 0);
}

// pp
void main()
{
    int n, r;
    personnel P[99];

    printf("entre le nombre de users pour ajouter\n");
    scanf("%d", &n);
    remplire(personnel[99], int n);
    r = login(personnel TP[99], int n);
    if (r == 1)

    {
        menu_admin();
    }
    else if (r == 2)
    {
        menu_agent();
    }
    else
    {
        printf("cannot find user")
    }
}