/* Exercice1 */
#include <stdio.h>
void main()
{
printf("Bonjour Ceci est Votre premier programme en 'c' ");
}




/* Exercice3 */
#include <stdio.h>
void main()
{
int a,b, per;
printf("Entrez la longueur du rectangle \n");
scanf("%d",&a);
printf("Entrez la largeur du rectangle \n");
scanf("%d",&b);
per=((a+b)*2);
printf("perimetre=%d",per);
return 0;
}

/* Exercice4 */
#include <stdio.h>
void main()
{
int b;
float a;
printf("entrez la valeur de a \n");
scanf( "%f" ,&a);
printf("entrez la valeur de b \n");
scanf( "%d" ,&b);
printf("%f",a+b);
}



/* Exercice5 */
#include <stdio.h>
void main()
{
float Rs, R1, R2, R3, Rp;
printf("entrez la valeur de R1 \n");
scanf( "%f" ,&R1);
printf("entrez la valeur de R2 \n");
scanf( "%f" ,&R2);
printf("entrez Ia valeur de R3 \n");
scanf( "%f" ,&R3);
Rs=R1+R2+R3;
printf("Rs est %.2f \n",Rs);
Rp=(R1+R2+R3)/(R1*R2+R1*R3+R2*R3);
printf("Rp est %.2f \n",Rp);
}

/* Exercice6 */
#include <stdio.h>
void main()
{
int nbr_h,nbr_h_sup;
float total;
printf("entrez nombre de heures \n");
scanf("%d",&nbr_h);
total=nbr_h*3.397;
printf("entrez nombre de heure supplementaires \n");
scanf("%d",&nbr_h_sup);
total=(total+nbr_h_sup*4.322);
total=total+((2.2/100)*total);
printf("salaire  total est %.2f \n",total);
}
