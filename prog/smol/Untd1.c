//exercice_probleme_serie5
algo probleme
const
   NMAX=100
type
   Tabch=tableau[1..N]de caractere
   TabMch=tableau[1..N,1..N]de caractere


var
   ch: tabch
   tj: tabch
   Mch:tabMch
   NMAX,N,aux,aux1,i,min,i,debu_t,fi_n,milieu,k,h:entier
   c:caractere
debut
  repeter
   ecrire('donner la taille N du tableau a saisir ')
   lire(N)
  jusqu'a(N<NMAX)
 pour i allant de 1 a N faire
  ecrire('fait la remplissage du tableau ')
  lire('ch[i]')
  finpour
 pour i allant de 1 a N-1 faire
  min<==i
   pour j allant de i+1 a N faire
    si orde(ch[min])<orde(ch[i])
      alors min<==j
   finsi
   finpour
 aux<==ch[min]
 ch[min]<==ch[i]
 ch[i]<==aux
 finpour
 lire(c)
 debu_t<==1
 fi_n<==N
   repeter
      milieu<==(debu_t+fi_n)div2
       si (c<ch[milieu])
        alors
           fi_n<==milieu-1
            sinon
               debu_t<==milieu+1
     finsi&
  jusqu'a(debu_t>fi_n)ou(c=ch[milieu])
     si (c=ch[milieu])
          alors
              ecrire(c'se trouve dans ch ')
                 sinon
                   N<==N+1
                   k<==orde(c)
                     pour i allant de k a N+1 faire
                        ch[i]<==ch[i+1]
                        ch[k]<==c
                     finpour
     finsi
          pour i allant de 1 a N faire
            pour j allant de 1 a N faire
              ecrire('saisie Mch[',i,',',j,'];')
               lire(Mch[i,j])
             finpour
          finpour
     pour i allant de a N faire
        Mch[i,j]<==tj[i]
     finpour
  pour i allant de i+1 a n faire
    aux1<==tj[i]
    h<==1-1
      tantque (h>=1) et (tj[h]>aux1) faire
        tj[h+1]<==tj[h]
        h<==h-1
      fintantque
   tj(i+1)<==aux1
 finpour

   pour i allant de 1 a N faire
       pour j allant de 1 a N faire
     tj[i]<==  Mch[i,j]
       finpour
   finpour
       ecrire('la nouvelle matrice trie Mch[',i,',',j,']:')
fin


