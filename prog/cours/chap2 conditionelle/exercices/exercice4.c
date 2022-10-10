#include <stdio.h>
#include <stdlib.h>

int main()
{int a,b,c,min;
printf("a=");
scanf("%d",&a);
printf("b=");
scanf("%d",&b);
printf("c=");
scanf("%d",&c);
min=b ;
if (a<min)
min=a ;
if (c<min)
min=c;
printf("min=%d",min);
    return 0;
}
