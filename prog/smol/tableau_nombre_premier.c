#include<stdio.h>
#include<stdlib.h>
int main()
{
int N,t[N];
printf("Veuillez saisir la valeur de N \n");
scanf("%d",&N);
int i,compteur ,x,estpremier=0;
x=2;
do{estpremier=0;
for (i=2; i<=N;i++){

        if(x % i==0)
        estpremier=1;
  }
  if(estpremier==0) {
    t[compteur]=x;
    compteur++ ;
  } x++ ;
}while(compteur<N);
printf("les %d premier nombres premiers sont :\n ",N);
for (i=2; i<=N;i++)
printf("%d \n",t[i]) ;
return 0;
}
