#include<stdio.h>
#include<stdlib.h>
int main()
{
    int T[20],i,j;
    int  aux , n ,min;
    printf("vruillez sisir la taille du tableau : \n");
    scanf("%d",&n );
    printf("veuillez sisir les elements  du tableau : \n");
    for(i=0;i<n;i++){
        printf("|T[%d]|=",i+1);
        scanf("%d",&T[i]);
    }

for (i=0;i<n-1;i++)
{
   min=i ;
   for (j=i+1;j<n;j++)
   {
       if (T[j]<T[min])
        min=j;
   }
 aux=T[i];
 T[i]=T[min];
 T[min]=aux;
}

       for (i=0;i<n;i++)

            printf("%d\n",T[i]);
return 0;
}
