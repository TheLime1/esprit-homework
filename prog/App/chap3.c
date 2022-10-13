#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int i, rez, rmoy, mynum, rAZ, lvl, ezlives, moylives, stat;
    char mychar;
    printf("--------Bienvenue au jeu du mystere--------\n");
    printf("--------Veuillez choisir le niveau--------\n");
    printf("--------1: Niveau Facile--------\n");
    printf("--------2: Niveau Moyenne--------\n");
    printf("--------3: Niveau Difficile--------\n");
    printf("--------0: Quitter--------\n");
    scanf("%d", &lvl);

    rez = rand() % 100 + 1;
    rmoy = rand() % 1000 + 1;
    rAZ = 'A' + (rand() % 26 - 0) + 0;
    ezlives = 15;
    moylives = 10;

    scanf("%d", &mynum);
    stat = 1;
    /*stat used for switching between rez and rAZ
    1:rez
    2:rAZ
    3:break*/

    switch (lvl)
    {
    case 1:
        while (mynum != rez)
        {
            if (mynum < rez)
            {
                printf("your number is smaller than my number ;)");
                scanf("%d", &mynum);
                ezlives--;
                printf("your lives:\n");
                printf("%d", ezlives);
            }
            else if (mynum > rez)
            {
                printf("your number is bigger than my number ;)");
                scanf("%d", &mynum);
                ezlives--;
                printf("your lives:\n");
                printf("%d", ezlives);
            }
            else if (ezlives == 0)
            {
                printf("no more lives\n");
                printf("correct answer is :\n");
                printf("%d", rez);
            }
        }
        if (mynum == rez)
        {
            printf("CORRECT");
            break;
        }
        break;
    case 2:
        while (mynum != rmoy)
        {
            if (mynum < rmoy)
            {
                printf("your number is smaller than my number ;)");
                scanf("%d", &mynum);
                moylives--;
                printf("your lives:\n");
                printf("%d", moylives);
            }
            else if (mynum > rmoy)
            {
                printf("your number is bigger than my number ;)");
                scanf("%d", &mynum);
                moylives--;
                printf("your lives:\n");
                printf("%d", moylives);
            }
            else if (moylives == 0)
            {
                printf("no more lives\n");
                printf("correct answer is :\n");
                printf("%d", rmoy);
            }
        }
        if (mynum == rmoy)
        {
            printf("CORRECT");
            break;
        }
        break;
    case 3:
        while (stat != 0)
        {
            if (stat == 1)
            {
                if (mynum < rez)
                {
                    printf("your number is smaller than my number ;)");
                    scanf("%d", &mynum);
                    moylives--;
                    printf("your lives:\n");
                    printf("%d", moylives);
                }
                else if (mynum > rez)
                {
                    printf("your number is bigger than my number ;)");
                    scanf("%d", &mynum);
                    moylives--;
                    printf("your lives:\n");
                    printf("%d", moylives);
                }
                else if (moylives == 0)
                {
                    printf("no more lives\n");
                    printf("correct answer is :\n");
                    printf("%d", rez);
                }

                if (mynum == rez)
                {
                    printf("CORRECT");
                    stat = 0;
                }
                else
                {
                    stat = 1;
                    printf("enter your char");
                    scanf("%c", &mychar);
                }
            }
            if (stat == 2)
            {
                if (mynum == rez)
                {
                    printf("CORRECT");
                    stat = 0;
                }
                else
                {
                    printf("your char is not correct");
                    moylives--;
                    printf("your lives:\n");
                    printf("%d", moylives);
                    stat = 1;
                }
            }
        }
    case 4:
        printf(":/");
        break;
    default:
        break;
    }
}
