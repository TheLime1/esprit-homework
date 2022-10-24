#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mat[100][100], tab[100], tab_prix_u[100],tab_prix_tot[100];
    int i, j, nr, np, nbr, nbp, somme, choix, tampon, min, debut, fin, trouve, X,milieu;
// saisir le nombre de ligne
    do
    {
        printf("donner le nombre de rayon :\n");
        scanf("%d",&nr);
    }
    while (!(nr>0)&&(nr<30));
// saisir le nombre de colonne
    do
    {
        printf("donner le nombre de produit :\n");
        scanf("%d",&np);
    }
    while (!(np>0)&&(np<30));
// remplir la matrice
    for (j=0; j<np; j++)
    {
        printf("produit %d :\n",j+1);
        for (i=0; i<nr; i++)
        {

            printf("remplir la quantie de ce produit au rayon %d :\n",i+1);
            scanf("%d",&mat[i][j]);
        }
    }
//afficher le menu
    do
    {
        do
        {
            printf("1- saisir la quantite presente de chaque produit  :\n");
            printf("2- mettre a jour la quantite dun produit donne dans un rayon donne  :\n");
            printf("3-calculer et afficher la quantite de chaque produit :\n");
            printf("4- saisir le prix unitaire de chaque produit:\n");
            printf("5-calculer et sotcker dans un tableau a part le prix total des produit :\n");
            printf("6-supprimer du tableau des prix totaux toutes les cases ayant un prix egal a zero : \n");
            printf("7-trier le tableau et recherche dun element : \n");
            printf("0-quitte");
            scanf("%d",&choix);
        }
        while ((choix<0)||(choix>7));
        switch(choix)
        {
        case 1 :
            for (j=0; j<np; j++)
            {
                printf("produit %d :\n",j+1);
                for (i=0; i<nr; i++)
                {
                    printf(" rayon : %d  quantite : %d\n",j+1,mat[i][j]);
                }
            }
            break ;
        case 2 :
            printf("donner le produit :\n");
            scanf("%d",&nbp);
            printf("donner le rayon :\n");
            scanf("%d",&nbr);
            printf("donner la nouvelle quantite :\n");
            scanf("%d",&mat[nbr][nbp]);


            break ;



        case 3 :
            for (j=0; j<np; j++)
            {
                somme=0;
                for (i=0; i<nr; i++)
                {
                    somme= somme +mat[i][j];
                }
                tab[j]=somme;
            }

            for (i=0; i<np; i++)
                printf("|%d|\n",tab[i]);
            break ;
        case 4 :
            printf("donner le prix untaire de chaque produit :\n");
            for (i=0; i<np; i++)
            {
                printf("produit %d",i+1);
                scanf("%d",&tab_prix_u[i]);
            }


        case 5 :
            for (i=0; i<np; i++)
            {
                for (j=0; j<np; j++)
                {
                    somme=somme+(tab_prix_u[i]*tab[j]);
                }
                tab_prix_tot[i]=somme;
            }

        case 6 :

            for (i=0; i<np; i++)
            {
                if (tab_prix_tot[i]==0)
                {
                    for (j=i; j<np-1; j++)
                    {
                        tab_prix_tot[j]=  tab_prix_tot[j+1];
                        np--;
                        i--;
                    }
                }
                else
                    printf("il ya pas de 0 \n");
            }
            break ;
        case 7 :
            for (i=0; i<np-1; i++)

            {

                min=i ;

                for (j=i+1; j<np; j++)

                {

                    if (tab_prix_tot[j]<tab_prix_tot[min])

                        min=j;

                }

                tampon=tab_prix_tot[i];

                tab_prix_tot[i]=tab_prix_tot[min];

                tab_prix_tot[min]=tampon;

            }
            trouve = -1;
            debut = 0 ;
            fin = np-1 ;
            printf("donner lelement a rechercher : \n");
            scanf("%d",&X);
            while ((trouve == -1)&&(debut <= fin ))

            {

                milieu = (debut + fin)/2;

                if (tab_prix_tot[milieu] > X )

                    fin=milieu - 1;

                else if (tab_prix_tot[milieu] < X)

                    debut = milieu + 1;

                else

                    trouve=1;

            }
            if (trouve==1)
                printf("lelement existe ! \n");
            else
                printf("lelement n existe pas ! \n");
            break ;



        }
    }
    while (choix!=0);

    return 0;
}