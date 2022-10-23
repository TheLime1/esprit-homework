#include <stdio.h>
#include <stdlib.h>

void main()
{
    int milieu, trouver = -1, debut = 0, n, fin = n - 1, x, T[10];
    while ((trouver == -1) && (debut <= fin))
    {
        milieu = ((debut + fin) / 2);
        if (x < T[milieu])
        {
            fin = milieu - 1;
        }
        else if (x > T[milieu])
        {
            debut = milieu + 1;
        }
        else
        {
            trouver = 1;
        }
    }
}
