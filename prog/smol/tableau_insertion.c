#include<stdio.h>
#include<stdlib.h>
int main()
{
    int t[100],i;
    int taille , pos , N ;
    printf("vruillez sisir la taille du tableau : \n");
    scanf("%d",&taille );
    printf("veuillez sisir la taille du tableau : \n");
    for(i=0;i<taille;i++){
        printf("t[%d]=",i+1);
        scanf("%d",&t[i]);

    }
    printf("vruillez sisir la valeur a insere du tableau : \n");
    scanf("%d",&N);
    printf("vruillez sisir sa position : \n");
    scanf("%d",&pos );
    if (pos<=0 || pos>taille+1)
      printf("position invalide !veuillez entrer un position entre 1 et %d \n", taille+1);
    else
    {
      for(i=taille;i>=pos;i--)
        t[i]=t[i-1];
    }
      t[pos-1]=N ;
      taille++ ;
       printf("elements du tableau apres insertion sont :\n ");

       for (i=0;i<taille;i++)

            printf("%d\n",t[i]);


    return 0;
}
