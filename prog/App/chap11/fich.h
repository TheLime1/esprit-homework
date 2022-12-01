#ifndef FICH_H_INCLUDED
#define FICH_H_INCLUDED

typedef struct
{
    int id;
    char nom[30];
    char prenom[30];
    float plafond;
} adherent;

typedef struct
{
    int type;
    adherent id;
    int reff;
    float price;
} constat;

#endif // FICH_H_INCLUDED
