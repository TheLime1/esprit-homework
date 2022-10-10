#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
    int num1, num2, num3, total;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    printf("Enter the third number: ");
    scanf("%d", &num3);
    printf("%d %d %d\n", num1, num2, num3);
    total = num1 + num2 + num3;
    if (total % 2 == 0)
    {
        total = total * total;
        printf("nombre paire \n");
        printf("%d", total);
    }
    else
    {
        total = sqrt(total);
        printf("nombre impaire \n");
        printf("%d", total);
    }
}
