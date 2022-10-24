//recherche dico
            trouve = -1;
            debu_t = 0 ;
            fi_n = np-1 ;
            printf("donner lelement a rechercher : \n");
            scanf("%d",&X);
            while ((trouve == -1)&&(debu_t <= fi_n ))

            {   milieu = (debu_t + fi_n)/2;

                if (t[milieu] > X )


                    fi_n=milieu - 1;

                else if (t[milieu] < X)

                    debu_t = milieu + 1;

                else

                    trouve=1;

            }
            if (trouve==1)
                printf("alors l'element existe \n");
            else
                printf("alors l'element n existe pas  \n");
