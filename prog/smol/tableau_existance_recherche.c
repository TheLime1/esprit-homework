#include<stdio.h>
#include<stdlib.h>
int main()
{
int t[5],i,val=0,x=0 ;
printf("Veuillez saisir les elements du tableau \n");
for (i=0; i<5;i++){
        printf("le nombre t[%d]=\t",i+1);
    scanf(" %d",&t[i]);

}
printf(" la valeur a chercher  est ");
scanf( "%d",&val);
for (i=0; i<5;i++){
 if(t[i]==val)
    x=1;
 }
    if (x==1)
        printf("exciste %d",val);
  else
        printf("n'exciste pas %d",val);






return 0; }
