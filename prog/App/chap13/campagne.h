#ifndef CAMPAGNE_H_INCLUDED
#define CAMPAGNE_H_INCLUDED

typedef struct
{
    char designation[99];
    char type[99];
    int quantity;
} aide;
typedef struct
{
    int cin;
    int member;
    char designation[99];
} famille;

int verifier_exit(aide TA[], int nA, char designation[]);
void saisir_aide(aide *A);
void ajouter_aide(aideTA[], int *nA, aide A);
void afficher_aide(aide TA[], int n);
void remplir_famille(famille TF[], int nF);
void afficher_famille(famille TF[], int nF);
void max_min_aide(aide TA[], intnA, int *min, int *max);
int max_membre(famille TF[], int nF);
void supprimer(famille TF[], int *nF, int pos);
void affecter_aide(famille TF[], int *nf, aide TA[], int nA);
void controler_stock(aide TA[], int nA, aide TStock[], int *nS);

#endif // MACHINPANN_H_INCLUDED