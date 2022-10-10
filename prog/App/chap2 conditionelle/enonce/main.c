/*Aymen Hmani*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int anne, interChirurg, arretTravail, depistage, age, budget, risk, lvl;
    float taille, poid, IMC, cotationF, cotationB;

    printf("donner anne de naissance: \n");
    scanf("%d", &anne);
    printf("donne taille: \n");
    scanf("%f", &taille);
    printf("donner poid: \n");
    scanf("%d", &poid);
    printf("antecedents medicaux : \n");
    printf("intervention chirurgicale lors des 10 dernieres annees (1 si oui, 0 si non):      ");
    scanf("%d", &interChirurg);
    printf("un arret de travail de plus d'un mois lors des 5 dernieres annees (l si oui, O si non):    ");
    scanf("%d", &arretTravail);
    printf("depistage de serologies virales (0 si aucun, 1 si VHA[hepatite A], 2 si VHB[hepatite B],3 si VHC[hepatite C] et 4 si VIH[SIDA]):    ");
    scanf("%d", &depistage);
    printf("Budget maximal: ");
    scanf("%d", &budget);
    /*fin questions */
    age = 2022 - anne;
    IMC = poid / taille * taille;
    /*haut risk*/
    if (interChirurg == 1 || arretTravail == 1 || depistage <= 2)
    {
        risk = 3;
    }
    /*risque moyen*/
    else if (age > 50 || depistage == 1 || IMC < 16.5 || IMC >30)
    {
        risk = 2;
    }
    /*faible risque*/
    else
    {
        risk = 1;
    };
    /*code*/
    switch (risk)
    {
    case 3:
        printf("demande rejetee \n");
        break;
    case 2:
        if (budget < 1500)
        {
            printf("demande rejetee \n");
        }
        else if ((budget >= 1725) && (budget < 2070))
        {
            printf("niveau 1 : maximum de prestations remboursees = 3000 DT par an et par prestataire Tarif de cotisation total = 1725 DT. \n");
            scanf("%d", &lvl);
        }
        else if ((budget >= 1725) && (budget < 2415))
        {
            printf("niveau 1 : maximum de prestations remboursees = 3000 DT par an et par prestataire Tarif de cotisation total = 1725 DT. \n");
            printf("niveau 2 : maximum de prestations remboursees = 3500 DT par an et par prestataire Tarif de cotisation total = 2070 DT. \n");
            scanf("%d", &lvl);
        }
        else
        {
            printf("niveau 1 : maximum de prestations remboursees = 3000 DT par an et par prestataire Tarif de cotisation total = 1725 DT. \n");
            printf("niveau 2 : maximum de prestations remboursees = 3500 DT par an et par prestataire Tarif de cotisation total = 2070 DT. \n");
            printf("niveau 3 : maximum de prestations remboursees = 5000 DT par an et par prestataireTarif de cotisation total = 2415 DT.\n");
            scanf("%d", &lvl);
        };
        break;
    case 1:
        if (budget < 1500)
        {
            printf("demande rejetee \n");
        }
        else if ((budget >= 1725) && (budget < 2070))
        {
            printf("niveau 1 : maximum de prestations remboursees = 3000 DT par an et par prestataire Tarif de cotisation total = 1500 DT. \n");
            scanf("%d", &lvl);
        }
        else if ((budget >= 1725) && (budget < 2415))
        {
            printf("niveau 1 : maximum de prestations remboursees = 3000 DT par an et par prestataire Tarif de cotisation total = 1500 DT. \n");
            printf("niveau 2 : maximum de prestations remboursees = 3500 DT par an et par prestataire Tarif de cotisation total = 1800 DT. \n");
            scanf("%d", &lvl);
        }
        else
        {
            printf("niveau 1 : maximum de prestations remboursees = 3000 DT par an et par prestataire Tarif de cotisation total = 1500 DT. \n");
            printf("niveau 2 : maximum de prestations remboursees = 3500 DT par an et par prestataire Tarif de cotisation total = 1800 DT. \n");
            printf("niveau 3 : maximum de prestations remboursees = 5000 DT par an et par prestataireTarif de cotisation total = 2100 DT.\n");
            scanf("%d", &lvl);
        };
        break;
    };
    if (lvl == 1)
    {
        printf("Niveau 1 : details des plafonds de remboursement :\nConsultations :20 DT  acte\nMedicaments : 400 DT\nAnalyses : 150 DT\nRadiologie : 180 DT\nChirurgie : 1500 DT\nMaximum de prestations remboursees = 3000 DT par prestataire et par an\n");
    }
    else if (lvl == 2)
    {
        printf("Niveau 2 : details des plafonds de remboursement :\nConsultations :30 DT  acte\nMedicaments : 600 DT\Radiologie : 250 DT\nChirurgie : 1800 DT\nMaximum de prestations remboursees = 3000 DT par prestataire et par an\n");
    }
    else if (lvl == 3)
    {
        printf("Niveau 3 : details des plafonds de remboursement :\nConsultations :40 DT  acte\nMedicaments : 600 DT\nAnalyses : 3000 DT\nRadiologie : 300 DT\nChirurgie : 2000 DT\nMaximum de prestations remboursees = 3000 DT par prestataire et par an\n");
    }
    else
    {
        printf("rejetee");
    };
}
