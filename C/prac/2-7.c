#include <stdio.h>
Smile();

int main(void)
{
    int i,n;

    for(i=0;i<3;i++)
        {
            {
                for(n=3-i;n>0;n--)
                Smile();
            }
            printf("\n");
        }

    return 0;
}

Smile()
{
    printf("Smile!");
}
