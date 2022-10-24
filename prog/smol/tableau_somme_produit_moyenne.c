#include<stdio.h>
#include<stdlib.h>
int main()
{
float t[10];
int i;
float S=0,P=1,M=0 ;
i=i+1 ;
printf("Veuillez saisir les elements du tableau \n");
for (i=0; i<10;i++)
{  printf("le nombre t[%d] \t",i+1);
    scanf(" %f\n",&t[i]);

}
for (i=0; i<10;i++)
{
 S=S+t[i];
 P=P*t[i];
}
 M=S/10 ;
 printf("%.2f\n",S);
 printf("%.2f\n",P);
 printf("%.2f\n",M);




return 0;



}
