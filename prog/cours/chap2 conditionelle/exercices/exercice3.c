#include <stdio.h>
#include <stdlib.h>

void main()
{
    int H, h1, h2;
    float prix;
    printf("donner heure 1 \n");
    scanf("%d", &h1);
    printf("donner heure 2 \n");
    scanf("%d", &h2);
    H = h2 - h1;
    if (h1 > 18 && h2 < 21)
    {
        prix = 1.5 * H;
        printf("%f", prix);
    }
    else if (h1 > 21 && h2 < 24)
    {
        prix = 4.5 * H;
        printf("%f", prix);
    }
    else
    {
        prix = ((h2 - 21) * 4.5) + ((21 - h1) * 1.5);
        printf("%f", prix);
    }
}
