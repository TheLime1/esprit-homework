#include<stdio.h>
#include<stdlib.h>
int main()
{
int te[5],i,ts[5];
printf("Veuillez saisir les elements du tableau initiale \n");
for (i=0; i<5;i++){
        printf("le nombre te[%d]=\t",i+1);
    scanf(" %d",&te[i]);

}
 for (i=0; i<5;i++){
ts[4-i]=te[i];
  printf("les element du nouveau tableau est %d \n",ts[i]);
 }


return 0;
}
