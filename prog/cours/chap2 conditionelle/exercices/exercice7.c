#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
    int DD, MM, YYYY;

    printf("saisir jour:  ");
    scanf("%d", &DD);
    printf("saisir mois:  ");
    scanf("%d", &MM);
    printf("saisir annee:  ");
    scanf("%d", &YYYY);

    if (MM == 1)
    {
        printf("%d", DD);
        printf("janvier");
        printf("%d", YYYY);

        printf("%d", YYYY);
    }
    else if (MM == 2)
    {
        printf("%d", DD);
        printf("fevrier");
        printf("%d", YYYY);
    }
    else if (MM == 3)
    {
        printf("%d", DD);
        printf("Mars");
        printf("%d", YYYY);
    }
    else if (MM == 4)
    {
        printf("%d", DD);
        printf("Avril");
        printf("%d", YYYY);
    }
    else if (MM == 5)
    {
        printf("%d", DD);
        printf("Mai");
        printf("%d", YYYY);
    }
    else if (MM == 6)
    {
        printf("%d", DD);
        printf("Juin");
        printf("%d", YYYY);
    }
    else if (MM == 7)
    {
        printf("%d", DD);
        printf("Juillet");
        printf("%d", YYYY);
    }
    else if (MM == 8)
    {
        printf("%d %d", DD, "Aout", YYYY);
        printf("%d", DD);
        printf("Aout");
        printf("%d", YYYY);
    }
    else if (MM == 9)
    {
        printf("%d", DD);
        printf("September");
        printf("%d", YYYY);
    }
    else if (MM == 10)
    {
        printf("%d", DD);
        printf("Octobre");
        printf("%d", YYYY);
    }
    else if (MM == 11)
    {
        printf("%d", DD);
        printf("Novembre");
        printf("%d", YYYY);
    }
    else if (MM == 12)
    {
        printf("%d", DD);
        printf("Decembre");
        printf("%d", YYYY);
    }
    else
    {
        printf("Error")
    }
}
