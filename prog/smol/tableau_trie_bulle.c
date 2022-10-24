#include<stdio.h>
#include<stdlib.h>
int main()
{
    int T1[20],T2[10],t3[30],i,j;
    int  aux , n ,n1 ,min ,permute=0;
    printf("vruillez sisir la taille du tableau t1: \n");
    scanf("%d",&n );
    printf("veuillez sisir les elements  du tableau t1: \n");
    for(i=0;i<n;i++){
        printf("|T1[%d]|=",i+1);
        scanf("%d",&T1[i]);
    }
do {

for (i=0;i<n-1;i++)
{
   min=i ;

       if (T1[j]<T1[min])
        {


 aux=T1[i];
 T1[i]=T1[min];
 T1[min]=aux;
 permute =1 ;
}
}
} while(permute==1) ;



 for (i=0;i<n1;i++)
printf("%d\n",T1[i]);



    printf("vruillez sisir la taille du tableau t2 : \n");
    scanf("%d",&n1 );
    printf("veuillez sisir les elements  du tableau t2: \n");
    for(i=0;i<n1;i++){
        printf("|T[%d]|=",i+1);
        scanf("%d",&T2[i]);
    }
for (i=0;i<n1-1;i++)
{
   min=i ;
   for (j=i+1;j<n1;j++)
   {
       if (T2[j]<T2[min])
        min=j;
   }
 aux=T2[i];
 T2[i]=T2[min];
 T2[min]=aux;
}
// remplisage du tableau t3

 for (j=i+1;j<n;j++)





       for (i=0;i<n;i++)

            printf("%d\n",T2[i]);
return 0;
}

