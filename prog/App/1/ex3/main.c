#include <stdio.h>

int main ( )
 {
  char nom [ 20 ] ; // une variable nommée nom
  int classe ; // une variable nommée classe
  printf ( " C'est ma premiere seance d'APP dans le module Programmation Procedurale 1 !! \n " ) ;
  printf ( " Veuillez saisir votre nom complet \n " ) ;
  gets ( nom ) ;
  printf ( " Veuillez saisir votre classe \n " ) ;
  scanf ( " % d " , & classe ) ;
  printf ( " Je suis l'etudiant ( e ) : % s inscrit ( e ) en 1ere annee % d \n " , nom , classe ) ;
  return 0 ;
  }
