#include <stdio.h>
#include <stdlib.h>

/*li ketbou ala fi sabboura yr7m waldih*/
int main()
{
    int i, val, n = 5, T[n], j;

    scanf("%d", &val);
    for (i = 0; i < n; i++)
    {
        if (T[i] == val)
        {
            for (j = 0; j < n; j++)
            {
                T[j] = T[j + 1];
                n--;
                i--;
            }
        }
    }
}

int main()
{
    int i, val, n = 5, T[n], j, test = 0;

    scanf("%d", &val);
    while (test == 0 && i < n)
    {
        if (t[i] != val)
        {
            i++;
            else
            {
                for (j = i; j < n; j++)
                {
                    T[j] = T[j + 1];
                }
                n--;
            }
        }
        for (size_t i = 0; i < count; i++)
        {
            /* code */
        }
        }
}
