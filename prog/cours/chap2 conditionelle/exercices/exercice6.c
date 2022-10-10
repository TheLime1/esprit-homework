#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
    int num1, num2;
    char operation;
    float total;

    printf("Enter the number 1: ");
    scanf("%d", &num1);
    printf("Enter the number 2: ");
    scanf("%d", &num2);
    printf("entre operation : (+, *, -, /,%%). ");
    scanf("%c", &operation);
    if (operation == "+")
    {
        total = num1 + num2;
        printf("%f", total);
    }
    else if (operation == "-")
    {
        total = num1 - num2;
        printf("%f", total);
    }
    else if (operation == "*")
    {
        total = num1 * num2;
        printf("%f", total);
    }
    else if (operation == "/")
    {
        total = num1 / num2;
        printf("%f", total);
    }
    else if (operation == "%")
    {
        total = num1 % num2;
        printf("%f", total);
    }
    else
    {
        printf("Error Error Error Error Error ");
    };
}
