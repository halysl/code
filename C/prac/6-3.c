#include <stdio.h>
/* ‰≥ˆ–Œ»Á
F
FE
FED
FEDC
FEDCB
FEDCBA
*/

int main(void)
{
    char lett[27]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int m,n;

    for(m=1;m<=6;m++)
        for(n=1;n<=m;n++)
        {
            printf("%c",lett[6-n]);
            if(n==m)
                printf("\n");
        }
}
