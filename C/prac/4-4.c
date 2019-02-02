#include <stdio.h>

int main(void)
{
    int m;
    float n;

    printf("Your height is ______  cm.");
    printf("\b\b\b\b\b\b\b\b\b");
    scanf("%d",&m);
    n=(float)m/100;
    printf("Dabney,you are %3.2f m tall!\n",n);

    return 0;
}
