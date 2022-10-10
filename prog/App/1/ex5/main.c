#include <stdio.h>
#include <stdlib.h>

int main()
{

    int y;
    int x;
    int diff;
    int aux;
    printf("donner x \n");
    scanf ("%d",&x);
    printf("donner y \n");
    scanf("%d",&y);
    diff=x-y;
    printf("x-y=%d \n",diff);
    aux=y;
    y=x;
    x=aux;
    diff=x-y;
    printf("y-x=%d \n",diff);

    return 0;

}
