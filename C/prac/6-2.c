#include <stdio.h>
/*Êä³öÀàËÆÓÚ
$
$$
$$$
$$$$
$$$$$
*/
int main(void)
{
    int m,n;

    for(m=1;m<=5;m++)
        for(n=1;n<=m;n++)
        {
            printf("$");
            if(n==m)
                printf("\n");
        }
}

