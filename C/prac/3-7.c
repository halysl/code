#include <stdio.h>

int main(void)
{
    float inch;
    float cm;

    printf("\aYour height is     inch.");
    printf("\b\b\b\b\b\b\b\b\b");
    scanf("%f",&inch);
    cm=inch*2.54;
    printf("Be equal to %.1f centimeter.",cm);

    return 0;
}
