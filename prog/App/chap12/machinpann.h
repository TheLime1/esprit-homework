#ifndef MACHINPANN_H_INCLUDED
#define MACHINPANN_H_INCLUDED
typedef struct
{
    char reference[20];
    int etat;
} panne;
typedef struct
{
    int ref;
    panne liste[10];
} machine;
void menu(int *choix);
void saisir(machine *m);
void ajouter(machine Tm[], machine m, int *n);
int rechercherMach(machine Tm[], int n, int ref);
void saisirpanne(panne *p);
void ajouterpanne(int ref, machine Tm[], int n, panne p);
int totalPanne(int ref, machine Tm[], int n);
void modifier_etat_panne(int ref, machine Tm[], int n);
void afficher(int n, machine Tm[], int ref);
void trouver(machine Tm[], int n, int *n_rep, int *n_nrep, int ref);
void supprimer(machine Tm[], int *n);

#endif // MACHINPANN_H_INCLUDED
