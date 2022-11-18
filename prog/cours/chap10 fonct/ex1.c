#include <stdio.h>
#include <stdlib.h>

int Min(int x, int y);
int Max(int x, int y);

void main()
{
    int x, y, z, w;

    scanf("%d %d %d %d \n", &x, &y, &z, &w);
    printf("le Minimum :%d", Min(Min(x, y), Min(z, w)));
    printf("le Maximum :%d", Max(Max(x, y), Max(z, w)));
    return 0;
}
int Min(int a, int b)
{
    if (a > b)
        return b;
}
int Max(int a, int b)
{
    if (a > b)
        return a;
