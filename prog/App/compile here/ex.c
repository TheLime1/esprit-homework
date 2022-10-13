#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*2 tables : table humidity and temperature */
    int i, num, modif, modifT, cell, newdata, menu, on = 1, maxi, mini;
    float temp, hum, TT[15], TH[15], min = 9999, max = 0, total = 0, avg;

    /*saisir */
    do
    {
        printf("donner nombre de mesures : ");
        scanf("%d", &num);
    } while (num > 15);

    for (i = 0; i < num; i++)
    {
        printf("donner humidity : ");
        scanf("%f", &hum);
        printf("donner temperature : ");
        scanf("%f", &temp);
        TT[i] = temp;
        TH[i] = hum;
    }

    do
    {
        printf("\n");
        printf("---------------MENU---------------------------------------------\n");
        printf("------------1---AFFICHER TEMP ----------------------------------\n");
        printf("------------2---AFFICHER HUMIDITY-------------------------------\n");
        printf("------------3--change the temperature/the humidity--------------\n");
        printf("------------4---MAX/MIN ----------------------------------------\n");
        printf("------------5---AVG --------------------------------------------\n");
        printf("------------6---????? ------------------------------------------\n");
        printf("------------0---exit -------------------------------------------\n");
        printf("\n");

        do
        {
            printf("choose your option: ");
            scanf("%d", &menu);
        } while (menu < 0 && menu > 6);

        switch (menu)
        {
        case 1:
            printf("\n--------------humidity table--------------------\n");
            for (i = 0; i < num; i++)
            {
                printf("%f", TH[i]);
                printf("\t");
            }
            break;

        case 2:
            printf("\n--------------temp table--------------------\n");
            for (i = 0; i < num; i++)
            {
                printf("%f", TT[i]);
                printf("\t");
            }
            break;

        case 3:
            printf("do you want to change the temperature/the humidity?\n");
            printf("yes:1 \t non:2");
            scanf("%d", &modif);
            while (modif == 1)
            {
                printf("choose a table to modify to temperature/the humidity\n");
                printf("1:humidity\t 2:temperature");
                scanf("%d", &modifT);
                if (modifT == 1)
                {
                    printf("choose a cell to modify the temperature\n");
                    scanf("%d", &cell);
                    printf("type the new number:\n");
                    scanf("%d", &newdata);
                    TT[cell - 1] = newdata;
                }
                if (modifT == 2)
                {
                    printf("choose a cell to modify the humidity\n");
                    scanf("%d", &cell);
                    printf("type the new number:\n");
                    scanf("%d", &newdata);
                    TH[cell - 1] = newdata;
                    printf("do you want to modify more?\n");
                    printf("1:yes \t 2:no");
                    scanf("%d", &modif);
                }
            }

        case 4:
            for (i = 0; i < num; i++)
            {
                if (min < TH[i])
                {
                    min = TH[i];
                    mini = i;
                }
                if (max > TH[i])
                {
                    max = TH[i];
                    maxi = i;
                }
            }
            printf("max= \t");
            printf("%f", max);
            printf("\n");
            printf("i\n");
            printf("%d", maxi);
            printf("min= \t");
            printf("%f", min);
            printf("\n");
            printf("i\n");
            printf("%d", mini);
            break;

        case 5:
            for (i = 0; i < num; i++)
            {
                total = total + TH[i];
            }
            avg = total / num;
            printf("avg=  ");
            printf("%f", avg);
            break;

        case 6:

        case 0:
            on = 0;
        default:
            break;
        }

    } while (on == 1);
}
