#include <stdio.h>
#include <stdlib.h>
#include "machinpann.h"
int main()
{
    int n = 0, i, choix, ref, n_rep = 0, n_nrep = 0;
    machine m, Tm[20];
    panne p;
    do
    {
        menu(&choix);
        switch (choix)
        {
        case 1:
            ajouter(Tm, m, &n);
            break;
        case 2:
            printf("la reference  \n");
            scanf("%d", &ref);
            ajouterpanne(ref, Tm, n, p);
            break;
        case 3:
            printf(" la reference  \n");
            scanf("%d", &ref);
            printf("%d \n", totalPanne(ref, Tm, n));
            break;
        case 4:
            printf("la reference  \n");
            scanf("%d", &ref);
            modifier_etat_panne(ref, Tm, n);
        case 5:
            printf("la reference  \n");
            scanf("%d", &ref);
            afficher(n, Tm, ref);
            break;
        case 6:
            supprimer(Tm, &n);
            for (i = 0; i < n; i++)
            {
                printf("machine de reference %d\n", Tm[i].ref);
            }
            break;
        }
    } while (choix != 0);
    return 0;
}
