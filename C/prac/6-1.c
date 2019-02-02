#include <stdio.h>
//Êä³ö26¸öĞ¡Ğ´×ÖÄ¸
int main(void)
{
    char a[26];
    int i;

    for(i=0;i<26;i++)
        {
            a[i]=i+'a';
            printf("%c ",a[i]);
        }

    return 0;
}
