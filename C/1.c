#include <stdio.h>
int main()
{int i;
printf("ASCII\n");
for(i=0;i<126;i++)
    {putchar(i );
    if(i%5==0)
    printf("\n");
    }
return 0;
}
