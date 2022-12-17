#include <stdio.h>
#include <stdlib.h>
#include "livre.h"
int main()
{
    Livre p_livre,t_livres[20];
    Emprunt p_emprunt,t_emprunts[20];
    int i,code_l, choix,nl =0,ne=0, pos ,code,num;
    do
    {
        menu(&choix);
        switch(choix)
        {
    case 1:

        ajouter_livre(t_livres,&nl);
        break;
    case 2:
        afficher_livres(t_livres,nl);
        break ;
    case 3:
        saisir_emprunt(&p_emprunt);
        printf("saisir le num\n");
        scanf("%d",&num);
        //ajouter_emprunt(t_emprunts,&ne,t_livres,nl);
        break;
    case 4 :
        printf("donner le num\n");
        chercher_emprunt(num,t_emprunts,ne,&pos) ;
        //retourner_emprunt(num,t_emprunts,ne,t_livres,nl);
        break;
    case 5:
        afficher_emprunts_retournes(t_emprunts,ne);
        break;
    return 0;
}
    }while(choix!=0);
}
