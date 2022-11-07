#include <stdio.h>
#include <stdlib.h>

int main()
{
    typedef struct point
    {
        float abs;
        float ord;
    };
    float dx, dy;
    struct point P1, P2;

    printf("saisir les coord de P1 \n");
    scanf("%f", &P1.abs);
    scanf("%f", &P1.ord);
    printf("saisir les coord de P2 \n");
    scanf("%f", &P2.abs);
    scanf("%f", &P2.ord);
    printf("donner le deplacement dx ");
    scanf("%f", &dx);
    printf("donner le deplacement dy ");
    scanf("%f", &dy);
    P1.abs = P1.abs + dx;
    P1.ord = P1.ord + dy;
    printf("les coord de P1 %f %f", P1.abs, P1.ord);

    return 0;
}
