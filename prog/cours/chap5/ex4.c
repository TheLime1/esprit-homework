#include <stdlib.h>
#include <string.h>

void main()
{
    int i, sh[99];
    char ch;

    printf("donner mot");
    gets(sh);
    printf("donner character");
    scanf("%c", &ch);

    for (i = 0; i < strlen(sh); i++)
    {
        if (sh[i] == ch)
        {
            ch[i] = '\0';
        }
    }
    printf("%s", sh);
}
