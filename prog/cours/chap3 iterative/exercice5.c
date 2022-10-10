#include <stdio.h>

int main()
{
    int choix;
    printf("*******MENU**");
    printf("1-Pizza\n");
    printf("2-Escalope\n");
    printf("3-Poulet\n");
    printf("4-Grillade\n");

    do
    {
        printf("Votre choix:\t");
        scanf("%d", &choix);

    } while (choix < 1 || choix > 4);
    if (choix == 1)
    {
        printf("Votre choix est Pizza");
    }
    else if (choix == 2)
    {
        printf("Votre choix est Escalope");
    }
    else if (choix == 3)
    {
        printf("Votre choix est Poulet");
    }
    else if (choix == 4)
    {
        printf("Votre choix est Grillade");
    }

    return 0;
}
