#include <stdio.h>
#include <stdlib.h>

int main()
{
    float moy;
    printf("donner moyenne \n");
    scanf("%f",&moy);
    if(moy<10){
        printf("redouble");
    }else if(10<=moy && moy<12){
    printf("passable");
    }else if(12<=moy && moy<14){
    printf("Asser Bien");
    }else if(14<=moy && moy<16){
    printf("Bien");
    }else{
    printf("super bien");
    }
}
