#include <stdio.h>
#include <stdlib.h>

int main()
{
    int prix;
    printf("entre prix \n");
    scanf("%d", &prix);
    if (prix > 200)
    {
        prix = prix - (prix * 20) / 100;
        printf("%d", prix);
    }
    else if (prix > 100 && prix < 200)
    {
        prix = prix - (prix * 10) / 100;
        printf("%d", prix);
    }
    else if (prix > 20 && prix < 100)
    {
        prix = prix - (prix * 5) / 100;
        printf("%d", prix);
    }
    else
    {
        printf("no remise \n");
        printf("%d", prix);
    }
}
