#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
    int i, j = 0, exit = 0, choix, motC = 0;
    char ch[99], mot[20];

    do
    {
        do
        {
            printf("**************************\n");
            printf("1: Afficher les mots dune phrase\n");
            printf("2: Afficher les voyelle et leur nombre dans un mot\n");
            printf("3:construire une phrase\n");
            printf("0: quitte\n");
            printf("********************************\n");
            printf("veuillez saisir les elements:\n");
            scanf("%d", &choix);
        } while (choix < 0 && choix > 3);

        switch (choix)
        {
        case 1:
            printf("saisir une phrase\n");
            fflush(stdin);
            gets(ch);
            for (i = 0; i < strlen(ch); i++)
            {
                if (ch[i] != ' ' && ch[i] != '.')
                {
                    mot[j] = ch[i];
                    j++;
                }
                else
                {
                    motC++;
                    mot[j] = '\0';
                    printf("mot %d:\t", motC);
                    printf("%s", mot);
                    j = 0;
                    printf("\n");
                }
            }

            break;

        default:
            break;
        }

    } while (exit == 1);
}
