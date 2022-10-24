#include<stdio.h>
#include<stdlib.h>
int main()
{
    int t[100],i;
    int taille , pos , N ;
    printf("vruillez saisir la taille du tableau : \n");
    scanf("%d",&taille );
    printf("veuillez saisir la taille du tableau : \n");
    for(i=0;i<taille;i++){
        printf("t[%d]=",i+1);
        scanf("%d",&t[i]);

    }

    printf("vruillez siasir sa position : \n");
    scanf("%d",&pos);
    if (pos<=0 || pos>taille)
      printf("position invalide !veuillez entrer un position entre 1 et %d \n", taille);
       else
    {
      for(i=pos;i<taille;i++)
        t[i]=t[i-1];

    taille-- ;}
     printf("elements du tableau apres suppression sont :\n ");

       for (i=0;i<taille;i++)

         {
           printf("%d\n",t[i]);
           }


    return 0;
}
