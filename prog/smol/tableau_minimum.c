#include<stdio.h>
#include<stdlib.h>
int main()
{
int t[10],i,min ;
printf("Veuillez saisir les elements du tableau \n");
for (i=0; i<10;i++){
        printf("le nombre t[%d]=\t",i);
    scanf(" %d",&t[i]);
}
//on suppose que le min est premier element
min=t[0];
for (i=0; i<10;i++){
    if(min>t[i]) // pour le max on doit seulement inverser
        min=t[i];
}

printf("le minimum  est %d" ,min);



     return 0;}
