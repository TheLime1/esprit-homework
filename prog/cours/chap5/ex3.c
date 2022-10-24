#include <stdio.h>
main()
{
    char ch[99],reversed[99] ;
    int i, total = 0;
    printf("The string is: ");
    gets(ch);
    for (i = 0; ch[i] != '\0'; i++)
    {
        total = total + 1;
    }
    printf("length: %d", total);

    for ( i = total; i > total; i--)
    {
        
    }
    
}